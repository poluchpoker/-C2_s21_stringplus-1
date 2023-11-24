#include "s21_string.h"

char *s21_strtok(char *str, const char *delim) {
  static char *pip = S21_NULL;
  char *token = S21_NULL;

  if (str != S21_NULL) pip = str;
  if (*pip != '\0') {
    token = pip;
    while (*pip != '\0') {
      if (*pip == *delim) {
        *pip = '\0';
        pip++;
        break;
      }
      pip++;
    }
  }
  return token;
}