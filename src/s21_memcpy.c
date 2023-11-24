#include "s21_string.h"

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  char *ddest = (char *)dest;
  const char *ssrc = (const char *)src;
  if (src != S21_NULL) {
    for (s21_size_t i = 0; i < n; i++) {
      ddest[i] = ssrc[i];
    }
  }
  return dest;
}
