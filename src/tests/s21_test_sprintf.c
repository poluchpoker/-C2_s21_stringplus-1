#include "mainTest.h"

START_TEST(s21_sprintf_test) {
  char firstString[20];
  char secondString[20];
  s21_sprintf(firstString, "Fortnite: %c", 'f');
  sprintf(secondString, "Fortnite: %c", 'f');
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test2) {
  char firstString[20];
  char secondString[20];
  s21_sprintf(firstString, "Fortnite: %c", 'b');
  sprintf(secondString, "Fortnite: %c", 'b');
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test3) {
  char firstString[20];
  char secondString[20];
  char c = 'z';
  s21_sprintf(firstString, "Fortnite: %-5c", c);
  sprintf(secondString, "Fortnite: %-5c", c);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test4) {
  char firstString[20];
  char secondString[20];
  char c = 'v';
  s21_sprintf(firstString, "Fortnite: %5c", c);
  sprintf(secondString, "Fortnite: %5c", c);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test6) {
  char firstString[20];
  char secondString[20];
  int d = 69;
  s21_sprintf(firstString, "Int: %d int", d);
  sprintf(secondString, "Int: %d int", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test7) {
  char firstString[20];
  char secondString[20];
  int d = 69;
  s21_sprintf(firstString, "Int: %5d int", d);
  sprintf(secondString, "Int: %5d int", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test8) {
  char firstString[20];
  char secondString[20];
  int d = 69;
  s21_sprintf(firstString, "Int: %5d%d%d int", d, -4, 228);
  sprintf(secondString, "Int: %5d%d%d int", d, -4, 228);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test9) {
  char firstString[20];
  char secondString[20];
  int d = 69;
  s21_sprintf(firstString, "Int: %1.1d", d);
  sprintf(secondString, "Int: %1.1d", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test10) {
  char firstString[20];
  char secondString[20];
  int d = 69;
  s21_sprintf(firstString, "Int: %.5d", d);
  sprintf(secondString, "Int: %.5d", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test11) {
  char firstString[20];
  char secondString[20];
  int d = 69;
  s21_sprintf(firstString, "Int: %-.5d", d);
  sprintf(secondString, "Int: %-.5d", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test12) {
  char firstString[20];
  char secondString[20];
  int d = -0;
  s21_sprintf(firstString, "Int: %d int", d);
  sprintf(secondString, "Int: %d int", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test13) {
  char firstString[40];
  char secondString[40];
  int d = 2147483647;
  s21_sprintf(firstString, "Int: %d int", d);
  sprintf(secondString, "Int: %d int", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test14) {
  char firstString[40];
  char secondString[40];
  int d = -2147483647;
  s21_sprintf(firstString, "Int: %d int", d);
  sprintf(secondString, "Int: %d int", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test15) {
  char firstString[40];
  char secondString[40];
  long int d = 214748364912;
  s21_sprintf(firstString, "Int: %ld int", d);
  sprintf(secondString, "Int: %ld int", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test16) {
  char firstString[40];
  char secondString[40];
  long int d = -214748364912;
  s21_sprintf(firstString, "Int: %ld int", d);
  sprintf(secondString, "Int: %ld int", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test17) {
  char firstString[40];
  char secondString[40];
  long int d = 9223372036854775807;
  s21_sprintf(firstString, "Int: %ld int", d);
  sprintf(secondString, "Int: %ld int", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test18) {
  char firstString[40];
  char secondString[40];
  long int d = -9223372036854775807;
  s21_sprintf(firstString, "Int: %ld int", d);
  sprintf(secondString, "Int: %ld int", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test19) {
  char firstString[30];
  char secondString[30];
  short int d = 32767;
  s21_sprintf(firstString, "Int: %hd fortnite", d);
  sprintf(secondString, "Int: %hd fortnite", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test20) {
  char firstString[30];
  char secondString[30];
  int d = 327699;
  s21_sprintf(firstString, "Int: %11.10d fortnite", d);
  sprintf(secondString, "Int: %11.10d fortnite", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test21) {
  char firstString[20];
  char secondString[20];
  int d = 69;
  s21_sprintf(firstString, "Int: %5i%i%i int", d, -4, 228);
  sprintf(secondString, "Int: %5i%i%i int", d, -4, 228);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test22) {
  char firstString[20];
  char secondString[20];
  int d = 69;
  s21_sprintf(firstString, "Int: %1.1i", d);
  sprintf(secondString, "Int: %1.1i", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test23) {
  char firstString[20];
  char secondString[20];
  int d = 69;
  s21_sprintf(firstString, "Int: %.5i", d);
  sprintf(secondString, "Int: %.5i", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test24) {
  char firstString[20];
  char secondString[20];
  int d = 69;
  s21_sprintf(firstString, "Int: %-.5i", d);
  sprintf(secondString, "Int: %-.5i", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test25) {
  char firstString[20];
  char secondString[20];
  int d = -0;
  s21_sprintf(firstString, "Int: %i int", d);
  sprintf(secondString, "Int: %i int", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test26) {
  char firstString[40];
  char secondString[40];
  int d = 2147483647;
  s21_sprintf(firstString, "Int: %i int", d);
  sprintf(secondString, "Int: %i int", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test27) {
  char firstString[40];
  char secondString[40];
  int d = -2147483647;
  s21_sprintf(firstString, "Int: %i int", d);
  sprintf(secondString, "Int: %i int", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test28) {
  char firstString[40];
  char secondString[40];
  long int d = 214748364912;
  s21_sprintf(firstString, "Int: %li int", d);
  sprintf(secondString, "Int: %li int", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test29) {
  char firstString[40];
  char secondString[40];
  long int d = -214748364912;
  s21_sprintf(firstString, "Int: %li int", d);
  sprintf(secondString, "Int: %li int", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test30) {
  char firstString[40];
  char secondString[40];
  long int d = 9223372036854775807;
  s21_sprintf(firstString, "Int: %li int", d);
  sprintf(secondString, "Int: %li int", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test31) {
  char firstString[40];
  char secondString[40];
  long int d = -9223372036854775807;
  s21_sprintf(firstString, "Int: %li int", d);
  sprintf(secondString, "Int: %li int", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test32) {
  char firstString[30];
  char secondString[30];
  short int d = 32767;
  s21_sprintf(firstString, "Int: %hi fortnite", d);
  sprintf(secondString, "Int: %hi fortnite", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test33) {
  char firstString[30];
  char secondString[30];
  int d = 327699;
  s21_sprintf(firstString, "Int: %11.10i fortnite", d);
  sprintf(secondString, "Int: %11.10i fortnite", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test34) {
  char firstString[40];
  char secondString[40];
  int d = 327710;
  s21_sprintf(firstString, "Int: %-+10.5i fortnite", d);
  sprintf(secondString, "Int: %-+10.5i fortnite", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test35) {
  char firstString[40];
  char secondString[40];
  int d = 327710;
  s21_sprintf(firstString, "Int: %+.5i fortnite", d);
  sprintf(secondString, "Int: %+.5i fortnite", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test36) {
  char firstString[40];
  char secondString[40];
  float f = -13.373;
  s21_sprintf(firstString, "Float: %.6f ballz", f);
  sprintf(secondString, "Float: %.6f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test37) {
  char firstString[40];
  char secondString[40];
  float f = 13.373;
  s21_sprintf(firstString, "Float: %2.6f ballz", f);
  sprintf(secondString, "Float: %2.6f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test38) {
  char firstString[40];
  char secondString[40];
  float f = 13.373;
  s21_sprintf(firstString, "Float: %2.2f ballz", f);
  sprintf(secondString, "Float: %2.2f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test39) {
  char firstString[40];
  char secondString[40];
  float f = 13.373;
  s21_sprintf(firstString, "Float: %2.2f ballz", f);
  sprintf(secondString, "Float: %2.2f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test40) {
  char firstString[40];
  char secondString[40];
  float f = 1.000210021;
  s21_sprintf(firstString, "Float: %f ballz", f);
  sprintf(secondString, "Float: %f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test41) {
  char firstString[40];
  char secondString[40];
  float f = 0;
  s21_sprintf(firstString, "Float: %f ballz", f);
  sprintf(secondString, "Float: %f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test42) {
  char firstString[40];
  char secondString[40];
  float f = 0.;
  s21_sprintf(firstString, "Float: %f ballz", f);
  sprintf(secondString, "Float: %f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test43) {
  char firstString[40];
  char secondString[40];
  float f = -123.123;
  s21_sprintf(firstString, "Float: %f ballz", f);
  sprintf(secondString, "Float: %f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test44) {
  char firstString[40];
  char secondString[40];
  float f = -.0000001;
  s21_sprintf(firstString, "Float: %f ballz", f);
  sprintf(secondString, "Float: %f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test45) {
  char firstString[40];
  char secondString[40];
  float f = -.00001;
  s21_sprintf(firstString, "Float: %f ballz", f);
  sprintf(secondString, "Float: %f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test46) {
  char firstString[40];
  char secondString[40];
  float f = .00001;
  s21_sprintf(firstString, "Float: %f ballz", f);
  sprintf(secondString, "Float: %f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test47) {
  char firstString[40];
  char secondString[40];
  float f = -.0000021;
  s21_sprintf(firstString, "Float: %10f ballz", f);
  sprintf(secondString, "Float: %10f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test48) {
  char firstString[40];
  char secondString[40];
  float f = -.0000021;
  s21_sprintf(firstString, "Float: %3.5f ballz", f);
  sprintf(secondString, "Float: %3.5f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test49) {
  char firstString[40];
  char secondString[40];
  double f = -.0000021;
  s21_sprintf(firstString, "Double: %3.5lf ballz", f);
  sprintf(secondString, "Double: %3.5lf ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test50) {
  char firstString[40];
  char secondString[40];
  double f = .0000021;
  s21_sprintf(firstString, "Double: %10lf ballz", f);
  sprintf(secondString, "Double: %10lf ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test51) {
  char firstString[256];
  char secondString[256];
  double f = .0000021;
  double f2 = 1551.111235512;
  double f3 = 15231425.12451435;
  double f4 = -12546014.11;
  s21_sprintf(firstString, "Double: %10lf %3.2lf %-lf %+lf ballz", f, f2, f3,
              f4);
  sprintf(secondString, "Double: %10lf %3.2lf %-lf %+lf ballz", f, f2, f3, f4);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test52) {
  char firstString[40];
  char secondString[40];
  char *s = "text";
  s21_sprintf(firstString, "String: %s sus", s);
  sprintf(secondString, "String: %s sus", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test53) {
  char firstString[40];
  char secondString[40];
  char *s = "text";
  s21_sprintf(firstString, "String: %.3s sus", s);
  sprintf(secondString, "String: %.3s sus", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test54) {
  char firstString[40];
  char secondString[40];
  char *s = "text";
  s21_sprintf(firstString, "String: %.6s sus", s);
  sprintf(secondString, "String: %.6s sus", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test55) {
  char firstString[40];
  char secondString[40];
  char *s = "text with space";
  s21_sprintf(firstString, "String: %6.9s sus", s);
  sprintf(secondString, "String: %6.9s sus", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test56) {
  char firstString[40];
  char secondString[40];
  char *s = "text with space";
  s21_sprintf(firstString, "String: %-6.9s sus", s);
  sprintf(secondString, "String: %-6.9s sus", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test57) {
  char firstString[40];
  char secondString[40];
  wchar_t *s = L"wide chars: ";
  s21_sprintf(firstString, "%-6.9ls", s);
  sprintf(secondString, "%-6.9ls", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test58) {
  char firstString[40];
  char secondString[40];
  wchar_t *s = L"wide chars: ";
  s21_sprintf(firstString, "%6.9ls", s);
  sprintf(secondString, "%6.9ls", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test59) {
  char firstString[40];
  char secondString[40];
  wchar_t *s = L"wide chars: ";
  s21_sprintf(firstString, "ABOBA: %ls", s);
  sprintf(secondString, "ABOBA: %ls", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test60) {
  char firstString[40];
  char secondString[40];
  wchar_t *s = L"wide chars: ";
  s21_sprintf(firstString, "ABOBA: %ls sss", s);
  sprintf(secondString, "ABOBA: %ls sss", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test61) {
  char firstString[30];
  char secondString[30];
  char *format = "wchar: %5c";
  char w = 'c';
  int a = s21_sprintf(firstString, format, w);
  int b = sprintf(secondString, format, w);
  ck_assert_str_eq(firstString, secondString);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(s21_sprintf_test64) {
  char firstString[BUFFERSIZE];
  char secondString[BUFFERSIZE];
  char *format = "wchar: %43ls";
  wchar_t w[] = L"àààààà";
  int a = s21_sprintf(firstString, format, w);
  int b = sprintf(secondString, format, w);
  ck_assert_str_eq(firstString, secondString);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(s21_sprintf_test65) {
  char firstString[BUFFERSIZE];
  char secondString[BUFFERSIZE];
  char *format = "wchar: %6.69ls";
  wchar_t w[] = L"àààààà";
  int a = s21_sprintf(firstString, format, w);
  int b = sprintf(secondString, format, w);
  ck_assert_str_eq(firstString, secondString);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(s21_sprintf_test66) {
  char firstString[BUFFERSIZE];
  char secondString[BUFFERSIZE];
  ck_assert_int_eq(
      s21_sprintf(firstString, "%s%s%s%s", "Aboba", " ", "Babybe", "fortnite"),
      sprintf(secondString, "%s%s%s%s", "Aboba", " ", "Babybe", "fortnite"));
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test67) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 69696969;
  s21_sprintf(firstString, "Amogus: %u unsigned", u);
  sprintf(secondString, "Amogus: %u unsigned", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test68) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 69696969;
  s21_sprintf(firstString, "Amogus: %-.5u unsigned", u);
  sprintf(secondString, "Amogus: %-.5u unsigned", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test69) {
  char firstString[50];
  char secondString[50];
  unsigned int u = 69696969;
  s21_sprintf(firstString, "Unsigned: %.5u fortnite", u);
  sprintf(secondString, "Unsigned: %.5u fortnite", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test70) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 69696969;
  s21_sprintf(firstString, "%-.5u aboba", u);
  sprintf(secondString, "%-.5u aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test71) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 1;
  s21_sprintf(firstString, "Unsigned: %u aboba", u);
  sprintf(secondString, "Unsigned: %u aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test72) {
  char firstString[40];
  char secondString[40];
  unsigned int u = -0;
  s21_sprintf(firstString, "Unsigned: %u aboba", u);
  sprintf(secondString, "Unsigned: %u aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test73) {
  char firstString[50];
  char secondString[50];
  unsigned int u = 2147483647;
  s21_sprintf(firstString, "Unsigned: %u aboba", u);
  sprintf(secondString, "Unsigned: %u aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test74) {
  char firstString[50];
  char secondString[50];
  unsigned int u = -2147483647;
  s21_sprintf(firstString, "Unsigned: %u aboba", u);
  sprintf(secondString, "Unsigned: %u aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test75) {
  char firstString[60];
  char secondString[60];
  unsigned long u = 214748364912;
  s21_sprintf(firstString, "Unsigned: %lu aboba", u);
  sprintf(secondString, "Unsigned: %lu aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test76) {
  char firstString[60];
  char secondString[60];
  unsigned long u = -9223372036854775807;
  s21_sprintf(firstString, "Unsigned: %lu aboba", u);
  sprintf(secondString, "Unsigned: %lu aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test77) {
  char firstString[60];
  char secondString[60];
  unsigned long u = 9223372036854775807;
  s21_sprintf(firstString, "Unsigned: %lu aboba", u);
  sprintf(secondString, "Unsigned: %lu aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test78) {
  char firstString[30];
  char secondString[30];
  unsigned short int u = 32767;
  s21_sprintf(firstString, "Unsigned: %hu aboba", u);
  sprintf(secondString, "Unsigned: %hu aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test79) {
  char firstString[30];
  char secondString[30];
  unsigned short int u = 32770;
  s21_sprintf(firstString, "Unsigned: %hu aboba", u);
  sprintf(secondString, "Unsigned: %hu aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test80) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 327710;
  s21_sprintf(firstString, "Unsigned: %11.10u aboba", u);
  sprintf(secondString, "Unsigned: %11.10u aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test81) {
  char firstString[512];
  char secondString[512];
  char *d = "2048";
  s21_sprintf(firstString, "%101s", d);
  sprintf(secondString, "%101s", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test84) {
  char firstString[512];
  char secondString[512];
  char *format = "wchar: %lc";
  wchar_t w = L'A';
  int a = s21_sprintf(firstString, format, w);
  int b = s21_sprintf(secondString, format, w);
  ck_assert_str_eq(firstString, secondString);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(s21_sprintf_test85) {
  char firstString[512];
  char secondString[512];
  char *format = "%s";
  char *val = "21S ASDOADBFAUODFBAS agsdfjgoals 2341";
  int a = s21_sprintf(firstString, format, val);
  int b = sprintf(secondString, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test86) {
  char firstString[512];
  char secondString[512];
  char *format = "%15s";
  char *val = "21S ASDOADBFAUODFBAS agsdfjgoals 2341";
  int a = s21_sprintf(firstString, format, val);
  int b = sprintf(secondString, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test87) {
  char firstString[512];
  char secondString[512];
  char *format = "%.15s";
  char *val = "21S ASDOADBFAUODFBAS agsdfjgoals 2341";
  int a = s21_sprintf(firstString, format, val);
  int b = sprintf(secondString, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test88) {
  char firstString[512];
  char secondString[512];
  char *format = "%15.15s";
  char *val = "21S ASDOADBFAUODFBAS agsdfjgoals 2341";
  int a = s21_sprintf(firstString, format, val);
  int b = sprintf(secondString, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test89) {
  char firstString[512];
  char secondString[512];
  char *format = "%-6.9s";
  char *val = "21S ASDOADBFAUODFBAS agsdfjgoals 2341";
  int a = s21_sprintf(firstString, format, val);
  int b = sprintf(secondString, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test90) {
  char firstString[512];
  char secondString[512];
  char *format = "%+-6.9s";
  char *val = "21S ASDOADBFAUODFBAS agsdfjgoals 2341";
  int a = s21_sprintf(firstString, format, val);
  int b = sprintf(secondString, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test91) {
  char firstString[512];
  char secondString[512];
  char *format = "% s";
  char *val = "21S ASDOADBFAUODFBAS agsdfjgoals 2341";
  int a = s21_sprintf(firstString, format, val);
  int b = sprintf(secondString, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test92) {
  char firstString[512];
  char secondString[512];
  char *format = "%s";
  char *val = "dA 9sDNsa NAID saDYBU DSnaJ Sd";
  int a = s21_sprintf(firstString, format, val);
  int b = sprintf(secondString, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test93) {
  char firstString[512];
  char secondString[512];
  char *format = "%s%s%s";
  char *val = "dA 9sDNsa NAID)";
  int a = s21_sprintf(firstString, format, val, val, val);
  int b = sprintf(secondString, format, val, val, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test94) {
  char firstString[512];
  char secondString[512];
  char *format = "wchar: %hs";
  wchar_t w[] = L"àààààà";
  int a = s21_sprintf(firstString, format, w);
  int b = sprintf(secondString, format, w);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

char c[255] = {}, d[255] = {}, x1 = 't';
int n = 2100, n1 = 0, n2 = -21;
short sh = 123, sh1 = -123;
float f = 21.21, f1 = -21.21;
long int lg = 12345678912345, lg1 = -12345678912345;

START_TEST(s21_sprintf_test_percent) {
  s21_sprintf(c, "%% %d", n);
  sprintf(d, "%% %d", n);
  ck_assert_str_eq(c, d);
}
END_TEST

START_TEST(s21_sprintf_test_d) {
  s21_sprintf(c, "%d %d %d %hd %hd %ld %ld %10ld", n, n1, n2, sh, sh1, lg, lg1,
              lg1);
  sprintf(d, "%d %d %d %hd %hd %ld %ld %10ld", n, n1, n2, sh, sh1, lg, lg1,
          lg1);
  ck_assert_str_eq(c, d);
}
END_TEST

START_TEST(s21_sprintf_test_d2) {
  s21_sprintf(c, "%-10d %10d %10d %2d", 21, n2, n, 10);
  sprintf(d, "%-10d %10d %10d %2d", 21, n2, n, 10);
  ck_assert_str_eq(c, d);
}
END_TEST

START_TEST(s21_sprintf_test_d3) {
  s21_sprintf(c, "%3.9d %.d %+-.5d %-+9.6d %.10d %.10d %2.2d %.d %.d % d %.0d",
              10, n, n2, 42, 21, 10, n, n2, -21, x1, 21);
  sprintf(d, "%3.9d %.d %+-.5d %-+9.6d %.10d %.10d %2.2d %.d %.d % d %.0d", 10,
          n, n2, 42, 21, 10, n, n2, -21, x1, 21);
  ck_assert_str_eq(c, d);
}
END_TEST

START_TEST(s21_sprintf_test_c) {
  s21_sprintf(c, "%c %10c %-10c", '!', 'a', 'b');
  sprintf(d, "%c %10c %-10c", '!', 'a', 'b');
  ck_assert_str_eq(c, d);
}
END_TEST

START_TEST(s21_sprintf_test_c2) {
  s21_sprintf(c, "%c %c %c", CHAR_MAX, CHAR_MIN, UCHAR_MAX);
  sprintf(d, "%c %c %c", CHAR_MAX, CHAR_MIN, UCHAR_MAX);
  ck_assert_str_eq(c, d);
}
END_TEST

START_TEST(s21_sprintf_test_s) {
  s21_sprintf(c, "%s %10s %-10s %-3s %.s %.3s %.10s", "hello", "aboba", "hello",
              "aboba", "hello", "aboba", "hello");
  sprintf(d, "%s %10s %-10s %-3s %.s %.3s %.10s", "hello", "aboba", "hello",
          "aboba", "hello", "aboba", "hello");
  ck_assert_str_eq(c, d);
}
END_TEST

START_TEST(s21_sprintf_test_s2) {
  s21_sprintf(c, "%ls %10ls %-10ls %-3ls %.ls %.3ls %.10ls", L"hello", L"aboba",
              L"hello", L"aboba", L"hello", L"aboba", L"hello");
  sprintf(d, "%ls %10ls %-10ls %-3ls %.ls %.3ls %.10ls", L"hello", L"aboba",
          L"hello", L"aboba", L"hello", L"aboba", L"hello");
  ck_assert_str_eq(c, d);
}

Suite *make_sprintf_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("21_sprintf");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_sprintf_test);
  tcase_add_test(tc_core, s21_sprintf_test2);
  tcase_add_test(tc_core, s21_sprintf_test3);
  tcase_add_test(tc_core, s21_sprintf_test4);
  tcase_add_test(tc_core, s21_sprintf_test6);
  tcase_add_test(tc_core, s21_sprintf_test7);
  tcase_add_test(tc_core, s21_sprintf_test8);
  tcase_add_test(tc_core, s21_sprintf_test9);
  tcase_add_test(tc_core, s21_sprintf_test10);
  tcase_add_test(tc_core, s21_sprintf_test11);
  tcase_add_test(tc_core, s21_sprintf_test12);
  tcase_add_test(tc_core, s21_sprintf_test13);
  tcase_add_test(tc_core, s21_sprintf_test14);
  tcase_add_test(tc_core, s21_sprintf_test15);
  tcase_add_test(tc_core, s21_sprintf_test16);
  tcase_add_test(tc_core, s21_sprintf_test17);
  tcase_add_test(tc_core, s21_sprintf_test18);
  tcase_add_test(tc_core, s21_sprintf_test19);
  tcase_add_test(tc_core, s21_sprintf_test20);
  tcase_add_test(tc_core, s21_sprintf_test21);
  tcase_add_test(tc_core, s21_sprintf_test22);
  tcase_add_test(tc_core, s21_sprintf_test23);
  tcase_add_test(tc_core, s21_sprintf_test24);
  tcase_add_test(tc_core, s21_sprintf_test25);
  tcase_add_test(tc_core, s21_sprintf_test26);
  tcase_add_test(tc_core, s21_sprintf_test27);
  tcase_add_test(tc_core, s21_sprintf_test28);
  tcase_add_test(tc_core, s21_sprintf_test29);
  tcase_add_test(tc_core, s21_sprintf_test30);
  tcase_add_test(tc_core, s21_sprintf_test31);
  tcase_add_test(tc_core, s21_sprintf_test32);
  tcase_add_test(tc_core, s21_sprintf_test33);
  tcase_add_test(tc_core, s21_sprintf_test34);
  tcase_add_test(tc_core, s21_sprintf_test35);
  tcase_add_test(tc_core, s21_sprintf_test36);
  tcase_add_test(tc_core, s21_sprintf_test37);
  tcase_add_test(tc_core, s21_sprintf_test38);
  tcase_add_test(tc_core, s21_sprintf_test39);
  tcase_add_test(tc_core, s21_sprintf_test40);
  tcase_add_test(tc_core, s21_sprintf_test41);
  tcase_add_test(tc_core, s21_sprintf_test42);
  tcase_add_test(tc_core, s21_sprintf_test43);
  tcase_add_test(tc_core, s21_sprintf_test44);
  tcase_add_test(tc_core, s21_sprintf_test45);
  tcase_add_test(tc_core, s21_sprintf_test46);
  tcase_add_test(tc_core, s21_sprintf_test47);
  tcase_add_test(tc_core, s21_sprintf_test48);
  tcase_add_test(tc_core, s21_sprintf_test49);
  tcase_add_test(tc_core, s21_sprintf_test50);
  tcase_add_test(tc_core, s21_sprintf_test51);
  tcase_add_test(tc_core, s21_sprintf_test52);
  tcase_add_test(tc_core, s21_sprintf_test53);
  tcase_add_test(tc_core, s21_sprintf_test54);
  tcase_add_test(tc_core, s21_sprintf_test55);
  tcase_add_test(tc_core, s21_sprintf_test56);
  tcase_add_test(tc_core, s21_sprintf_test57);
  tcase_add_test(tc_core, s21_sprintf_test58);
  tcase_add_test(tc_core, s21_sprintf_test59);
  tcase_add_test(tc_core, s21_sprintf_test60);
  tcase_add_test(tc_core, s21_sprintf_test61);
  tcase_add_test(tc_core, s21_sprintf_test64);
  tcase_add_test(tc_core, s21_sprintf_test65);
  tcase_add_test(tc_core, s21_sprintf_test66);
  tcase_add_test(tc_core, s21_sprintf_test67);
  tcase_add_test(tc_core, s21_sprintf_test68);
  tcase_add_test(tc_core, s21_sprintf_test69);
  tcase_add_test(tc_core, s21_sprintf_test70);
  tcase_add_test(tc_core, s21_sprintf_test71);
  tcase_add_test(tc_core, s21_sprintf_test72);
  tcase_add_test(tc_core, s21_sprintf_test73);
  tcase_add_test(tc_core, s21_sprintf_test74);
  tcase_add_test(tc_core, s21_sprintf_test75);
  tcase_add_test(tc_core, s21_sprintf_test76);
  tcase_add_test(tc_core, s21_sprintf_test77);
  tcase_add_test(tc_core, s21_sprintf_test78);
  tcase_add_test(tc_core, s21_sprintf_test79);
  tcase_add_test(tc_core, s21_sprintf_test80);
  tcase_add_test(tc_core, s21_sprintf_test81);
  tcase_add_test(tc_core, s21_sprintf_test84);
  tcase_add_test(tc_core, s21_sprintf_test85);
  tcase_add_test(tc_core, s21_sprintf_test86);
  tcase_add_test(tc_core, s21_sprintf_test87);
  tcase_add_test(tc_core, s21_sprintf_test88);
  tcase_add_test(tc_core, s21_sprintf_test89);
  tcase_add_test(tc_core, s21_sprintf_test90);
  tcase_add_test(tc_core, s21_sprintf_test91);
  tcase_add_test(tc_core, s21_sprintf_test92);
  tcase_add_test(tc_core, s21_sprintf_test93);
  tcase_add_test(tc_core, s21_sprintf_test94);
  tcase_add_test(tc_core, s21_sprintf_test_percent);
  tcase_add_test(tc_core, s21_sprintf_test_d);
  tcase_add_test(tc_core, s21_sprintf_test_d2);
  tcase_add_test(tc_core, s21_sprintf_test_d3);
  tcase_add_test(tc_core, s21_sprintf_test_c);
  tcase_add_test(tc_core, s21_sprintf_test_c2);
  tcase_add_test(tc_core, s21_sprintf_test_s);
  tcase_add_test(tc_core, s21_sprintf_test_s2);
  suite_add_tcase(s, tc_core);
  return s;
}