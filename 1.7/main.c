#include <stdio.h>

#define POWER_COUNT 10

int power(int m, int n);

int main() {
  for (int i = 0; i < POWER_COUNT; i++) {
    printf("%6d %6d %d\n", i, power(2, i), power(-3, i));
  }

  return 0;
}

// My power function is so much better than the standard, NIH ftw! /s.
int power(int base, int n) {
  int result = 1;

  for (int i = 1; i <= n; i++) {
    result = result * base;
  }

  return result;
}
