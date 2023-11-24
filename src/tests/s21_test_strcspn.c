#include "mainTest.h"

START_TEST(test_s21_strcspn_1) {
  char str_1[50] = "testingovoe predlogenie for testing";
  char str_2[] = "another testing slova";
  ck_assert_uint_eq(s21_strcspn(str_1, str_2), strcspn(str_1, str_2));
}
END_TEST

START_TEST(test_s21_strcspn_num) {
  char str_1[50] = "12345678909876543234567";
  char str_2[10] = "543";
  ck_assert_uint_eq(s21_strcspn(str_1, str_2), strcspn(str_1, str_2));
}
END_TEST

START_TEST(test_s21_strcspn_same_lines) {
  char str_1[50] = "testinovoe predlogenie for testing";
  char str_2[50] = "testinovoe predlogenie for testing";
  ck_assert_uint_eq(s21_strcspn(str_1, str_2), strcspn(str_1, str_2));
  ck_assert_uint_eq(s21_strcspn(str_1, str_2), strcspn(str_1, str_2));
}
END_TEST

START_TEST(test_s21_strcspn_4) {
  char str_1[50] = "";
  char str_2[50] = "";
  ck_assert_uint_eq(s21_strcspn(str_1, str_2), strcspn(str_1, str_2));
}
END_TEST

START_TEST(test_s21_strcspn_5) {
  char str_1[50] = "";
  char str_2[50] = "abc";
  ck_assert_uint_eq(s21_strcspn(str_1, str_2), strcspn(str_1, str_2));
}
END_TEST

Suite *make_strcspn_suite(void) {
  Suite *s = suite_create("strcspn_test_cases");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, test_s21_strcspn_1);
  tcase_add_test(tc_strings, test_s21_strcspn_num);
  tcase_add_test(tc_strings, test_s21_strcspn_same_lines);
  tcase_add_test(tc_strings, test_s21_strcspn_4);
  tcase_add_test(tc_strings, test_s21_strcspn_5);
  return s;
}