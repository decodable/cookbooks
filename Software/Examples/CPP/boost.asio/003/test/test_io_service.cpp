#include "io_service.h"
#include "timer.h"

#include <iostream>
#include <ctime>
#include <functional>

void on_timeout(timer &t) {
  const time_t ctt = time(0);
  std::cout << asctime(localtime(&ctt)) << std::endl;

  t.expires_from_now(1);
  t.async_wait(std::bind(on_timeout, std::ref(t)));
}

void test() {
  io_service io_service;

  timer t(io_service);
  t.expires_from_now(1);
  t.async_wait(std::bind(on_timeout, std::ref(t)));

  io_service.run();
}

int main(int argc, char* argv[]) {
  test();

  return 0;
}
