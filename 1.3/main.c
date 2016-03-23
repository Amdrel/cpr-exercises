#include <stdio.h>

main() {
  int farenheight;

  for (farenheight = 300; farenheight >= 0; farenheight = farenheight - 20) {
    printf("%3d %6.1f\n", farenheight, (5.0 / 9.0) * (farenheight - 32));
  }
}
