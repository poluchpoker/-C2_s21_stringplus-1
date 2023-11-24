#include "mainTest.h"

START_TEST(test_s21_trim_1) {
  char str_1[50] = "   Hello, world!   ";
  char *str_2 = s21_trim(str_1, " ");
  ck_assert_str_eq(str_2, "Hello, world!");
  if (str_2) free(str_2);
}
END_TEST

START_TEST(test_s21_trim_3) {
  char str_1[50] = "|||diary|||";
  char *str_2 = s21_trim(str_1, "|");
  ck_assert_str_eq(str_2, "diary");
  if (str_2) free(str_2);
}
END_TEST

START_TEST(test_s21_trim_4) {
  char str_1[50] = "L|";
  char *str_2 = s21_trim(str_1, "|");
  ck_assert_str_eq(str_2, "L");
  if (str_2) free(str_2);
}
END_TEST

Suite *make_trim_suite(void) {
  Suite *s = suite_create("trim");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, test_s21_trim_1);
  tcase_add_test(tc_strings, test_s21_trim_3);
  tcase_add_test(tc_strings, test_s21_trim_4);
  return s;
}