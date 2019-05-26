#ifndef __PROXY_H_
#define __PROXY_H_

void doit(void *connfd_p);
void parse_uri(char *uri, char *hostname, char *path, int *port);
void build_http_header(char *http_header, char *hostname, char *path, int port, rio_t *client_rio);
int connect_endServer(char *hostname, int port, char *http_header);

#endif /* __PROXY_H_ */

