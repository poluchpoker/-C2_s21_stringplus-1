#include "s21_string.h"

char *s21_strcat(char *str1, const char *str2) {
  while (*str1 != '\0') {
    str1++;
  }
  while (*str2 != '\0') {
    *str1 = *str2;
    str1++;
    str2++;
  }
  *str1 = '\0';
  return str1;
}
