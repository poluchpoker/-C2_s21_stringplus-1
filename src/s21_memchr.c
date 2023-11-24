#include "s21_string.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
  const unsigned char *s = str;

  if (str != S21_NULL) {
    for (s21_size_t i = 0; i < n; i++) {
      if (s[i] == c) {
        return (void *)(s + i);
      }
    }
  }
  return S21_NULL;
}
