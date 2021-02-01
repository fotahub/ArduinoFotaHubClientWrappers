#ifndef INTERNALSTORAGEWRAPPER_H
#define INTERNALSTORAGEWRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif

int InternalStorage_open(int length);

size_t InternalStorage_write(uint8_t b);

void InternalStorage_close(void);

void InternalStorage_apply(void);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
