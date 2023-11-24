#include "s21_string.h"

void *s21_to_lower(const char *str) {
  char *lower_str = S21_NULL;

  if (str != S21_NULL) {
    unsigned int len_str = 0;
    while (str[len_str] != '\0') len_str++;
    if (len_str > 0) {
      lower_str = (char *)malloc((len_str + 1) * sizeof(char));
      if (lower_str != NULL) {
        for (unsigned int position = 0; position <= len_str; ++position) {
          if (str[position] >= 'A' && str[position] <= 'Z') {
            lower_str[position] = str[position] - 'A' + 'a';
          } else {
            lower_str[position] = str[position];
          }
        }
        lower_str[len_str] = '\0';
      } else {
        lower_str = S21_NULL;
      }
    }
  }

  return (void *)lower_str;
}