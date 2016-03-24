#include <stdio.h>

#define MAXLINE 1000

int getbetterline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
  int len;
  int max = 0;

  char line[MAXLINE];
  char longest[MAXLINE];

  while ((len = getbetterline(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0) {
    printf("%s", longest);
  }

  return 0;
}

// Read a line into "line" and return the length of the line.
int getbetterline(char line[], int limit) {
  int c, i;

  // Set characters in the line so long as the index does not over extend past
  // the size boundry and breaks when EOF or a newline is reached.
  //
  // 1 is subtracted from limit to leave space for the null terminator.
  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    line[i] = c;
  }

  // Ensure a newline is at the end of the line as the loop breaks when a
  // newline is found.
  if (c == '\n') {
    line[i] = c;
    i++;
  }

  // Add a null terminator to the end of the line.
  line[i] = '\0';

  return i;
}

// Copies values in "from" into "to" assuming to is larger than from.
// This function is unsafe and must be used with caution.
void copy(char to[], char from[]) {
  int i = 0;

  // Copy values from "from" into "to", and stop copying once the null
  // terminator is reached.
  while ((to[i] = from[i]) != '\0') {
    i++;
  }
}
