#include "mainTest.h"

START_TEST(test_s21_strncat_1) {
  char str_1[50] = "this is a test\0";
  char str_2[] = " 543";
  s21_size_t dupa = 7;
  ck_assert_pstr_eq(s21_strncat(str_1, str_2, dupa),
                    strncat(str_1, str_2, dupa));
}
END_TEST

START_TEST(test_s21_strncat_2) {
  char str_1[50] = "21312\0";
  char str_2[] = "7";
  s21_size_t dupa = 5;
  ck_assert_pstr_eq(s21_strncat(str_1, str_2, dupa),
                    strncat(str_1, str_2, dupa));
}
END_TEST

START_TEST(test_s21_strncat_3) {
  char str_1[50] = "123\0 4";
  char str_2[] = "3";
  s21_size_t dupa = 2;
  ck_assert_pstr_eq(s21_strncat(str_1, str_2, dupa),
                    strncat(str_1, str_2, dupa));
}
END_TEST

Suite *make_strncat_suite(void) {
  Suite *s = suite_create("strncat");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, test_s21_strncat_1);
  tcase_add_test(tc_strings, test_s21_strncat_2);
  tcase_add_test(tc_strings, test_s21_strncat_3);
  return s;
}