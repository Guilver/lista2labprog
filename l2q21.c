#include "stdio.h"
int main(void) {
  int n, v[5];
  printf("numero de 5 digitos:\n");
  scanf("%d", &n);

  v[0] = n / 10000;
  v[1] = (n - v[0] * 10000) / 1000;
  v[2] = (n - v[0] * 10000 - v[1] * 1000) / 100;
  v[3] = (n - v[0] * 10000 - v[1] * 1000 - v[2] * 100) / 10;
  v[4] = (n - v[0] * 10000 - v[1] * 1000 - v[2] * 100 - v[3] * 10);

  if (v[0] == v[4] && v[1] == v[3]) {
    printf("O numero é palindromo.\n");
  }
  printf("Digitos: %d %d %d %d %d\n", v[0], v[1], v[2], v[3], v[4]);

  return 0;
}