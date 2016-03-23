#include <stdio.h>

main() {
  printf("Do you like puppies? [Y/n]: ");
  char answer = getchar();
  printf("Good, ");
  putchar(answer);
  printf("\n");
}
