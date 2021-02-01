#include <HttpClient.h>
#include <WiFiNINA.h>
#include "HttpClientWrapper.h"

WiFiSSLClient sslClient;

HttpClient httpGetClient(sslClient, "", 0);

int httpClient_connect(const char *host, uint16_t port) {
	httpGetClient = HttpClient(sslClient, host, port);

    return httpGetClient.connect(host, port);
}

int httpclient_startRequest(const char *aURLPath, const char *aHttpMethod) {
	return httpGetClient.startRequest(aURLPath, aHttpMethod);
}

int httpClient_responseStatusCode() {
	return httpGetClient.responseStatusCode();
}

int httpClient_contentLength() {
	return httpGetClient.contentLength();
}

size_t httpClient_readBytes(uint8_t *buffer, size_t length) {
	return httpGetClient.readBytes(buffer, length);
}

void httpClient_stop() {
	httpGetClient.stop();
}
