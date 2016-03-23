#include <stdio.h>

main() {
  float farenheight, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;

  // Table heading.
  printf("%11s %7s\n", "FARENHEIGHT", "CELSIUS");

  // Step through farenheight values between lower and upper with a specified
  // step value. Print the celsius conversion of those values.
  while (farenheight <= upper) {
    farenheight = (celsius * (9.0 / 5.0)) + 32.0;
    printf("%11.0f %7.1f\n", farenheight, celsius);
    celsius = celsius + step;
  }
}
