CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c11
TFLAGS=-fprofile-arcs -ftest-coverage

all: s21_string.a test lcov_report clean

s21_string.a:
	$(CC) $(CFLAGS) -c *.c
	ar r s21_string.a *.o
	rm *.o

test: objects_test objects_lib
	$(CC) $(TFLAGS) *.o -o test -lcheck
	./test

clang:
	cp ../materials/linters/.clang-format .
	clang-format -i *.c tests/*.c
	rm .clang-format

objects_test:
	$(CC) $(CFLAGS) -c ./tests/*.c

objects_lib:
	$(CC) $(CFLAGS) -c $(TFLAGS) *.c

lcov_report: test
	@lcov -t test -o rep.info -c -d .
	@genhtml -o report rep.info
	@open ./report/index.html
	# gcovr
	# gcovr --html-details -o report.html
	# open report.html

clean:
	rm -rf *.html *.css *.gc* *.o *.a test report *.info

rebuild: clean all

.PHONY: clean all s21_string.a test clang object_test objects_lib lcov_report rebuild
