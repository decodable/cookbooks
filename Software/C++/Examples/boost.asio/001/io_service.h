#ifndef IO_SERVICE_H_
#define IO_SERVICE_H_

/**
 * ```
 * Boost.Asio is a cross-platform C++ library for network and low-level 
 * I/O programming that provides developers with a consistent 
 * asynchronous model using a modern C++ approach.
 * ```
 *
 * But first it is an event driven library.
 * This is one implemented in epoll.
 */
class io_service
{
public:
  io_service();

  void run();
private:
  static const int MAXEVENTS = 128;
  int efd;
};

#endif
