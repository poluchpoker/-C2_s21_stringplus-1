#include "s21_string.h"

char *s21_strncat(char *str1, const char *str2, s21_size_t n) {
  s21_size_t z = 0, y = 0;
  while (str1[z] != '\0') z++;
  while (y < n && str2[y] != '\0') {
    str1[z + y] = str2[y];
    y++;
  }

  str1[z + y + 1] = '\0';
  return str1;
}