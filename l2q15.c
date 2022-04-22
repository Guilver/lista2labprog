#include <stdio.h>

int main(void) {
  int r;

  for (int j = 0; j <= 7; j++) {
    r = 1;
    for (int i = 1; i <= j; i++) {
      r = r * 3;
    }
    printf("3 potencia %d = %d\n", j, r);
  }
  return 0;
}