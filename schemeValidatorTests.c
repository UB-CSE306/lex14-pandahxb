#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "schemeValidator.h"
#include <criterion/criterion.h>


void runtest(char *input, int expected);

// Tests

Test(coverage, test00) {  runtest("4",-1);  }

void runtest(char *input, int expected) {
  int actual = schemeValidator(input);
  cr_assert_eq(expected,actual);
}
