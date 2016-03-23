#include <stdio.h>

#define DIGIT_COUNT 10

int main() {
  int c, whitespace, other;
  int digits[DIGIT_COUNT];

  // Zero out our stack allocations.
  whitespace = other = 0;
  for (int i = 0; i < DIGIT_COUNT; i++) {
    digits[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      digits[c - '0']++;
    } else if (c == ' ' || c == '\n' || c == '\t') {
      whitespace++;
    } else {
      other++;
    }
  }

  printf("digits =");
  for (int i = 0; i < DIGIT_COUNT; i++) {
    printf(" %d", digits[i]);
  }
  printf(", whitespace = %d, other = %d\n", whitespace, other);

  return 0;
}
