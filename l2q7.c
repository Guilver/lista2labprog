#include <stdio.h>

int main(void) {
  int a, b;
  printf("Primeiro numero: \n");
  scanf("%d", &a);
  do {
    printf("Segundo numero: \n");
    scanf("%d", &b);
  } while (b == 0);
  printf("Divisão: %.2f", (float)a / b);
  return 0;
}