#include "mainTest.h"

START_TEST(test_s21_memchr_1) {
  char str[50] = "123456";
  char str1 = '5';
  s21_size_t n = 10;
  ck_assert_str_eq(s21_memchr(str, str1, n), memchr(str, str1, n));
}
END_TEST

START_TEST(test_s21_memchr_2) {
  char str[50] = "123456";
  char character = '7';
  s21_size_t length = 6;

  void *s21_result = s21_memchr(str, character, length);
  void *std_result = memchr(str, character, length);

  ck_assert_ptr_eq(s21_result, std_result);
}
END_TEST

START_TEST(test_s21_memchr_3) {
  char str[50] = "123456";
  char character = '3';
  s21_size_t length = 0;

  void *s21_result = s21_memchr(str, character, length);
  void *std_result = memchr(str, character, length);

  ck_assert_ptr_eq(s21_result, std_result);
}
END_TEST

Suite *make_memchr_suite(void) {
  Suite *s = suite_create("memchr");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, test_s21_memchr_1);
  tcase_add_test(tc_strings, test_s21_memchr_2);
  tcase_add_test(tc_strings, test_s21_memchr_3);
  return s;
}