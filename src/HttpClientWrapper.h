#ifndef HTTPCLIENTWRAPPER_H
#define HTTPCLIENTWRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif

int httpClient_connect(const char *host, uint16_t port);

int httpclient_startRequest(const char *aURLPath, const char *aHttpMethod);

int httpClient_responseStatusCode(void);

int httpClient_contentLength(void);

size_t httpClient_readBytes(uint8_t *buffer, size_t length);

void httpClient_stop(void);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
