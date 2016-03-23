#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

main() {
  int farenheight;

  for (farenheight = LOWER; farenheight <= UPPER; farenheight = farenheight + STEP) {
    printf("%3d %6.1f\n", farenheight, (5.0 / 9.0) * (farenheight - 32));
  }
}
