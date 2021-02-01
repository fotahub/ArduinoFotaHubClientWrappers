#include <SHA256.h>
#include "HashWrapper.h"

br_md5_context ctxMd5;
br_sha1_context ctxSha1;
br_sha256_context ctxSha256;
br_sha384_context ctxSha384;
br_sha512_context ctxSha512;

void hash_init(ArduinoHashAlgorithm_t hashAlgorithm) {
    switch(hashAlgorithm) {
		case ARDUINO_HASH_ALGORITHM_MD5:
		br_md5_init(&ctxMd5);
        break;
        case ARDUINO_HASH_ALGORITHM_SHA1:
		br_sha1_init(&ctxSha1);
        break;
        case ARDUINO_HASH_ALGORITHM_SHA256:
	    br_sha256_init(&ctxSha256);
        break;
		case ARDUINO_HASH_ALGORITHM_SHA384:
        br_sha384_init(&ctxSha384);
        break;
		case ARDUINO_HASH_ALGORITHM_SHA512:
		br_sha512_init(&ctxSha512);
        break;	
        default:
        break;
    }
}

void hash_update(ArduinoHashAlgorithm_t hashAlgorithm, uint8_t const *buffer, size_t size) {
	switch(hashAlgorithm) {
		case ARDUINO_HASH_ALGORITHM_MD5:
		br_md5_update(&ctxMd5,buffer,size);	    
        break;
        case ARDUINO_HASH_ALGORITHM_SHA1:
		br_sha1_update(&ctxSha1,buffer,size);
        break;
        case ARDUINO_HASH_ALGORITHM_SHA256:
	    br_sha256_update(&ctxSha256,buffer,size);
        break;
		case ARDUINO_HASH_ALGORITHM_SHA384:
		br_sha384_update(&ctxSha384,buffer,size);
        break;
		case ARDUINO_HASH_ALGORITHM_SHA512:
		br_sha512_update(&ctxSha512,buffer,size);
        break;	
        default:
        break;
    }
}

void hash_end(ArduinoHashAlgorithm_t hashAlgorithm, uint8_t *digest) {
	switch(hashAlgorithm) {
		case ARDUINO_HASH_ALGORITHM_MD5:
		br_md5_out(&ctxMd5,digest);
        break;
        case ARDUINO_HASH_ALGORITHM_SHA1:
		br_sha1_out(&ctxSha1,digest);
        break;
        case ARDUINO_HASH_ALGORITHM_SHA256:
		br_sha256_out(&ctxSha256,digest);
        break;
		case ARDUINO_HASH_ALGORITHM_SHA384:
		br_sha384_out(&ctxSha384,digest);
        break;
		case ARDUINO_HASH_ALGORITHM_SHA512:
		br_sha512_out(&ctxSha512,digest);
        break;	
        default:
        break;
    }
}
