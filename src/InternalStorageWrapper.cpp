#include <InternalStorage.h>
#include "InternalStorageWrapper.h"

int InternalStorage_open(int length) {
	return InternalStorage.open(length);
}

size_t InternalStorage_write(uint8_t b) {
	return InternalStorage.write(b);
}

void InternalStorage_close() {
	InternalStorage.close();
}

void InternalStorage_apply() {
	InternalStorage.apply();
}
