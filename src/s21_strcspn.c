#include "s21_string.h"

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  s21_size_t i = 0, j = 0, counter = 0;
  for (i = 0; i < sizeof(str1); i++, counter++) {
    for (j = 0; j < sizeof(str2); j++) {
      if (str2[j] == str1[i]) {
        return counter;
      }
    }
  }
  return counter;
}
