#include <stdio.h>

main() {
  int c = 0;
  int newlines = 0;
  int tabs = 0;
  int blanks = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      newlines++;
    } else if (c == '\t') {
      tabs++;
    } else if (c == ' ') {
      blanks++;
    }
  }

  printf("Newline count: %d\n", newlines);
  printf("Tab count: %d\n", tabs);
  printf("Whitespace count: %d\n", blanks);
}
