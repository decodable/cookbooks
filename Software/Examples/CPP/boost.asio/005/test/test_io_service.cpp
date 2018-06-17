#include "io_service.h"
#include "tcp_acceptor.h"
#include "tcp_socket.h"

#include <functional>
#include <iostream>
#include <ctime>
#include <memory>
#include <string.h>
#include <unistd.h>

class tcp_connection {
public:
  typedef std::shared_ptr<tcp_connection> pointer;

  static pointer create() {
    return pointer(new tcp_connection());
  }

  tcp_socket &socket() {
    return socket_;
  }

  void start() {
    const time_t ctt = time(0);
    char *time = asctime(localtime(&ctt));
    write(socket_.socket, time, strlen(time));
  }

private:
  tcp_socket socket_;
};

class tcp_server {
public:
  tcp_server(io_service &io_service) : acceptor_(io_service) {
  }

  void start_accept() {
    tcp_connection::pointer new_connection = tcp_connection::create();
    acceptor_.async_accept(new_connection->socket(),
                std::bind(&tcp_server::handle_accept, this, new_connection));
  }

  void handle_accept(tcp_connection::pointer new_connection) {
    new_connection->start();
    start_accept();
  }

private:
  tcp_acceptor acceptor_;
};

void test() {
  io_service io_service;
  tcp_server server(io_service);
  server.start_accept();

  io_service.run();
}

int main(int argc, char* argv[]) {
  test();

  return 0;
}
