#include "greatest.h"

TEST x_getopt_long_should_succeed(void) {
  PASS();
}

/* Suites can group multiple tests with common setup. */
SUITE(getopt_long_suite) {
  RUN_TEST(x_getopt_long_should_succeed);
}
