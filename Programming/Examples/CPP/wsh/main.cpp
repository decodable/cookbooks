/**
 */

#include <unistd.h>

int wsh_loop() {
}

int main(int argc, char* argv[]) {
  auto pid = fork();

  wsh_loop();

  return 0;
}
