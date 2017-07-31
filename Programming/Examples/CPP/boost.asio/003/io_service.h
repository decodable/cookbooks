#ifndef IO_SERVICE_H_
#define IO_SERVICE_H_

#include <functional>
struct epoll_event;

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
  typedef std::function<void()> HANDLER;

  io_service();

  void register_event(int fd, int events, HANDLER *callback);

  void run();
  void run_one();
private:
  static const int MAXEVENTS = 128;
  int efd;
};

#endif
