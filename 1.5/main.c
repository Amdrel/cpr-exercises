#include <stdio.h>

main() {
  int c = 0;
  int blanks = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      blanks++;
    } else {
      blanks = 0;
    }

    if (blanks <= 1) {
      putchar(c);
    }
  }
}
