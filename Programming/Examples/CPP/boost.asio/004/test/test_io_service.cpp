#include "io_service.h"
#include "tcp_acceptor.h"

#include <functional>
#include <iostream>
#include <ctime>

void on_connect() {
  const time_t ctt = time(0);
  std::cout << "Connection request: " << asctime(localtime(&ctt)) << std::endl;
}

void test() {
  io_service io_service;

  tcp_acceptor t(io_service);
  t.async_accept(on_connect);

  io_service.run();
}

int main(int argc, char* argv[]) {
  test();

  return 0;
}
