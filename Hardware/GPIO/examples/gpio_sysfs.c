#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_LEN (128)

void ferr(const char *msg, const char *filename) {
  char buf[BUF_LEN];
  sprintf(buf, "%s %s", msg, filename);
  perror(buf);
  exit(1);
}

typedef enum {
  GPIO_GET,
  GPIO_SET,
} GPIO_OP;

typedef struct {
  GPIO_OP operation;
  int gpioNr;
  int value;
  int repeat;
} Options;

Options options = {
  .operation = GPIO_GET,
  .gpioNr = 0,
  .value = 0,
  .repeat = 1,
};

void usage(const char *program) {
  printf("%s get|set {gpio num} {value} [repeat times]\n", program);
}

void parse_options(int argc, char *argv[]) {
  if (argc < 4 || argc > 5) {
    usage(argv[0]);
    exit(1);
  }

  if (strcmp(argv[1], "get") == 0) {
    options.operation = GPIO_GET;
  }
  else if (strcmp(argv[1], "set") == 0) {
    options.operation = GPIO_SET;
  }
  else {
    usage(argv[0]);
    exit(1);
  }

  options.gpioNr = atoi(argv[2]);
  options.value = atoi(argv[3]);

  if (argc > 4) {
    options.repeat = atoi(argv[4]);
  }
}

void gpio_output(const char *filename, char *buf) {
  int fd = open(filename, O_WRONLY | O_SYNC);
  if (fd == -1) {
    ferr("open", filename);
  }

  if (write(fd, buf, strlen(buf)) < 0)
  {
    close(fd);
    ferr("write", filename);
  }

  close(fd);
}

void gpio_export(int gpioNr) {
  const char *filename = "/sys/class/gpio/export";

  char buf[BUF_LEN];
  sprintf(buf, "%d", gpioNr);
  
  gpio_output(filename, buf);
}

void gpio_unexport(int gpioNr) {
  const char *filename = "/sys/class/gpio/unexport";

  char buf[BUF_LEN];
  sprintf(buf, "%d", gpioNr);
  
  gpio_output(filename, buf);
}

void gpio_direction(int gpioNr, GPIO_OP op) {
  char filename[BUF_LEN];
  sprintf(filename, "/sys/class/gpio/gpio%d/direction", gpioNr);
  
  gpio_output(filename, (op == GPIO_SET ? "out" : "in"));
}

void gpio_set(int gpioNr, int val) {
  char filename[BUF_LEN];
  sprintf(filename, "/sys/class/gpio/gpio%d/value", gpioNr);

  char buf[BUF_LEN];
  sprintf(buf, "%d", val);
  
  gpio_output(filename, buf);
}

int gpio_get(int gpioNr) {
  char filename[BUF_LEN];
  sprintf(filename, "/sys/class/gpio/gpio%d/value", gpioNr);
  int fd = open(filename, O_RDWR | O_SYNC);
  if (fd == -1) {
    ferr("open", filename);
  }

  char buf[BUF_LEN + 1];
  sprintf(buf, "%d", gpioNr);

  int count;
  do {
    count = read(fd, buf, BUF_LEN);
  } while(count == 0);

  if (count < 0)
  {
    close(fd);
    ferr("read", filename);
  }

  close(fd);

  buf[count] = '\0';

  return atoi(buf);
}

int main(int argc, char *argv[]) {
  parse_options(argc, argv);

  gpio_export(options.gpioNr);
  gpio_direction(options.gpioNr, options.operation);

  if (options.operation == GPIO_GET) {
    int val;
    int i; for(i = 0; i < options.repeat; ++i) {
      val = gpio_get(options.gpioNr);
    }
    printf("%d\n", val);
  } else {
    int i; for(i = 0; i < options.repeat; ++i) {
      gpio_set(options.gpioNr, options.value);
    }
  }

  gpio_unexport(options.gpioNr);

  return 0;
}
