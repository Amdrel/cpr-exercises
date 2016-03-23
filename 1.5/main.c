#include <stdio.h>

main() {
  int c;

  printf("This is EOF: %d\n", EOF);

  while ((c = getchar()) != EOF) {
    putchar(c);
  }
}
