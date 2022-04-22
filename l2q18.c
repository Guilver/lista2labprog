#include <stdio.h>

int main(void) {
  unsigned long int n = 0;
  int p = 1;
  for (int j = 1; j <= 60; j++) {
    n = n + (p);
    p = p * 2;
  }
  printf("Grãos: %lu", n);
  return 0;
}
