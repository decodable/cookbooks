#ifndef TCP_SOCKET_H_
#define TCP_SOCKET_H_

#include <netdb.h>

static const int INVALID_SOCKET = -1;

typedef struct {
  int socket;
} tcp_socket;

void set_socket_non_blocking(int sfd);

struct addrinfo *create_addr(const char *port);

int bind_address(struct addrinfo *result);

int create_socket(const char *port);

int accept_socket(int sfd);

#endif

