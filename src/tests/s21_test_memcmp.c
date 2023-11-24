#include "mainTest.h"

START_TEST(test_s21_memcmp_1) {
  char arr1[10] = "Hello";
  char arr2[10] = "Hello";
  s21_size_t n = 7;

  ck_assert_int_eq(s21_memcmp(arr1, arr2, n), memcmp(arr1, arr2, n));
}
END_TEST

START_TEST(test_s21_memcmp_2) {
  char arr1[15] = "Hello, World!";
  char arr2[10] = "Hello";
  s21_size_t n = 10;
  //   int result = memcmp(arr1, arr2, n);
  ck_assert_int_eq(s21_memcmp(arr1, arr2, n), memcmp(arr1, arr2, n));
}
END_TEST

START_TEST(test_s21_memcmp_3) {
  char arr1[10] = "Hello";
  char arr2[10] = "HeLLo";
  s21_size_t n = 5;
  //   int result = memcmp(arr1, arr2, n);
  ck_assert_int_eq(s21_memcmp(arr1, arr2, n), memcmp(arr1, arr2, n));
}
END_TEST

Suite *make_memcmp_suite(void) {
  Suite *s = suite_create("memcmp");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, test_s21_memcmp_1);
  tcase_add_test(tc_strings, test_s21_memcmp_2);
  tcase_add_test(tc_strings, test_s21_memcmp_3);
  return s;
}
