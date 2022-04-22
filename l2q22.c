#include "stdio.h"

int main(void) {
  int n, n1, n2, cont = 0;
  printf("numero:\n");
  scanf("%d", &n);

  n2 = n;
  do {
    n1 = n2 / 10;
    if (n2 - n1 * 10 == 7) {
      cont++;
    }
    n2 = n2 / 10;
  } while (n2);

  printf("Quantidade de digitos 7: %d.\n", cont);

  return 0;
}
