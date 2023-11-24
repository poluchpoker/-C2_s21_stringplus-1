#include "s21_string.h"

char *s21_strpbrk(const char *str1, const char *str2) {
  s21_size_t i = 0, j = 0;
  char *s1 = (char *)str1;
  char *sym = S21_NULL;
  for (i = 0; s1[i] != '\0'; i++) {
    for (j = 0; str2[j] != '\0'; j++) {
      if (s1[i] == str2[j]) {
        return &s1[i];
      }
    }
  }
  return sym;
}