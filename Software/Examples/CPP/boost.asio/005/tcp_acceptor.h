#ifndef TCP_ACCEPTOR_H_
#define TCP_ACCEPTOR_H_

#include "io_service.h"
#include "tcp_socket.h"

class tcp_acceptor {
public:
  typedef io_service::HANDLER Handler;

  tcp_acceptor(io_service &io_service);
  void async_accept(tcp_socket &socket, const Handler &callback);
  void on_accept_ready(tcp_socket &socket, const Handler &callback);

private:
  io_service &io_servcie_;
  int sfd;
  Handler handler;
};

#endif
