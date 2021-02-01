#ifndef HASHWRAPPER_H
#define HASHWRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum ArduinoHashAlgorithm { 
  ARDUINO_HASH_ALGORITHM_NONE = 0, 
  ARDUINO_HASH_ALGORITHM_MD5,
  ARDUINO_HASH_ALGORITHM_SHA1, 
  ARDUINO_HASH_ALGORITHM_SHA256, 
  ARDUINO_HASH_ALGORITHM_SHA384, 
  ARDUINO_HASH_ALGORITHM_SHA512, 
} ArduinoHashAlgorithm_t;

void hash_init(ArduinoHashAlgorithm_t hashAlgorithm); 

void hash_update(ArduinoHashAlgorithm_t hashAlgorithm, uint8_t const *buffer, size_t size); 

void hash_end(ArduinoHashAlgorithm_t hashAlgorithm, uint8_t *digest);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
