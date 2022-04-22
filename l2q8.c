#include <stdio.h>

int main(void) {
  float v, e;
  int p;
  printf("Entre com o valor: \n");
  scanf("%f", &v);
  p = v / 3;
  e = v - 2 * p;
  printf("Entrada: %.2f\nParcelas: %d\n", e, p);
  return 0;
}