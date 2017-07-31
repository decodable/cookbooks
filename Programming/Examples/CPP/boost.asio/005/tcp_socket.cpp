#include "tcp_socket.h"

#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>

void set_socket_non_blocking(int sfd) {
  auto flags = fcntl(sfd, F_GETFL, 0);
  flags |= O_NONBLOCK;
  fcntl(sfd, F_SETFL, flags);
}

struct addrinfo *create_addr(const char *port) {
  struct addrinfo hints;

  memset(&hints, 0, sizeof (struct addrinfo));
  hints.ai_family = AF_UNSPEC;     /* Return IPv4 and IPv6 choices */
  hints.ai_socktype = SOCK_STREAM; /* We want a TCP socket */
  hints.ai_flags = AI_PASSIVE;     /* All interfaces */

  struct addrinfo *result = NULL;
  getaddrinfo (NULL, port, &hints, &result);

  return result;
}

int bind_address(struct addrinfo *result) {
  for (struct addrinfo *rp = result; true; rp = rp->ai_next) {
    if (rp == NULL) {
      return INVALID_SOCKET;
    }

    auto sfd = socket (rp->ai_family, rp->ai_socktype, rp->ai_protocol);
    if (sfd == INVALID_SOCKET) {
      continue;
    }

    auto s = bind(sfd, rp->ai_addr, rp->ai_addrlen);
    if (s == 0) {
      return sfd;
    }

    close (sfd);
  } 
}

int create_socket(const char *port) {
  struct addrinfo *result = create_addr(port);
  auto sfd = bind_address(result);
  freeaddrinfo(result);

  return sfd;
}

int accept_socket(int sfd) {
  struct sockaddr in_addr;
  socklen_t in_len = sizeof in_addr;
  auto infd = accept (sfd, &in_addr, &in_len);
  set_socket_non_blocking(infd);

  return infd;
}

