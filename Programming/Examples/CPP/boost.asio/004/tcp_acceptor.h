#ifndef TCP_ACCEPTOR_H_
#define TCP_ACCEPTOR_H_

#include "io_service.h"

class tcp_acceptor {
public:
  typedef io_service::HANDLER Handler;
  tcp_acceptor(io_service &io_service);
  void async_accept(const Handler &callback);
  void on_accept_ready(const Handler &callback);

private:
  io_service &io_servcie_;
  int sfd;
  Handler handler;
};

#endif
