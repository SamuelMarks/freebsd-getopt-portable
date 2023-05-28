#include "greatest.h"

#include "test_getopt.h"
#include "test_getopt_long.h"

/* Add definitions that need to be in the test runner's main file. */
GREATEST_MAIN_DEFS();

int main(int argc, char **argv) {
  GREATEST_MAIN_BEGIN();
  RUN_SUITE(getopt_suite);
  RUN_SUITE(getopt_long_suite);
  GREATEST_MAIN_END();
}
