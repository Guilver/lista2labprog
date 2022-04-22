#include "stdio.h"
int main(void) {
  int n;

  for (int i = 1; i <= 10; i++) {
    n = 1;
    if (i % 2 != 0) {
      for (int j = 1; j <= i; j++) {
        n = n * j;
      }
      printf("Fatorial de %d = %d\n", i, n);
    }
  }
  return 0;
}