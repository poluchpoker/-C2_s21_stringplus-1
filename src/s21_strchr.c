#include "s21_string.h"

char *s21_strchr(const char *str, int c) {
  int strLength = s21_strlen(str) + 1;
  const char *result = S21_NULL;

  for (int x = 0; x < strLength && result == S21_NULL; x++)
    if (str[x] == c) result = (str + x);

  return (char *)result;
}