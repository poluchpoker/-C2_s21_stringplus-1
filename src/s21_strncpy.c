#include "s21_string.h"

char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
  char *ddest = (char *)dest;
  const char *ssrc = (const char *)src;
  if (src != S21_NULL) {
    for (s21_size_t i = 0; i < n; i++) {
      ddest[i] = ssrc[i];
    }
  }
  return dest;
}