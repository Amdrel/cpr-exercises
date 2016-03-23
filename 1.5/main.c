#include <stdio.h>

#define IN  0
#define OUT 1

main() {
  int c, newlines, words, characters;
  newlines = words = characters = 0;

  int state = OUT;

  while ((c = getchar()) != EOF) {
    characters++;

    if (c == '\n') {
      newlines++;
    }

    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      words++;
      putchar('\n');
    }

    if (!(c == ' ' || c == '\n' || c == '\t')) {
      putchar(c);
    }
  }

  printf("\n\n%d %d %d\n", newlines, words, characters);
}
