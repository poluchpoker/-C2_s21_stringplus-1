#include "s21_string.h"

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  const unsigned char *s1 = str1, *s2 = str2;
  int count_sum = 0, check = 1;
  s21_size_t element;

  for (element = 0; element < n * check; element++) {
    if (s1[element] == s2[element]) {
      count_sum++;
    } else {
      count_sum = s1[element] - s2[element];
      check = 0;
    }
  }
  if (check) {
    count_sum = 0;
  }
  return count_sum;
}