#include <stdio.h>

int main(void) {
  int f;
  for (int i = 10; i <= 100; i = i + 10) {
    f = (i * 9 / 5) + 32;
    printf("\n\n Celsius: %d\n Fahrenheit: %d\n", i, f);
  }

  return 0;
}