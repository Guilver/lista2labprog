#include "stdio.h"
int main(void) {
  int a, b, m = 0, n = 0;
  printf("Primeiro numero: \n");
  scanf("%d", &a);
  printf("Segundo numero: \n");
  scanf("%d", &b);

  if (b < a) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
  }
  for (int i = a; i <= b; i++) {
    m = m + i;
    n++;
  }
  printf("Media aritmetica= %.2f", (float)m / n);
  return 0;
}