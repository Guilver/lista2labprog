#include <stdio.h>

int main(void) {
  int a, b;
  a = 5;
  b = 5;
  printf("Pré incrementar: %d\n", --a);
  printf("Pós incrementar: %d\n", b--);
  return 0;
}