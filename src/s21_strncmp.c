#include "s21_string.h"

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  const unsigned char *s1 = (const unsigned char *)str1;
  const unsigned char *s2 = (const unsigned char *)str2;
  char buffer = 0;
  for (s21_size_t i = 0; i < n; i++) {
    if (s1[i] != s2[i]) {
      buffer = s1[i] - s2[i];
      break;
    }
  }
  return buffer;
}
