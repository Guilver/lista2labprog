#include <stdio.h>

int main(void) {
  int n, maior = 0, menor = 0, x = 1;
  do {
    printf("Insira numero:\n");
    scanf("%d", &n);
    if (n < 0 && n % 2 == 0) {
      x = 0;
    }
    if (maior == 0 && menor == 0) {
      maior = n;
      menor = n;
    }
    if (n >= 0) {
      if (maior < n) {
        maior = n;
      }
      if (menor > n) {
        menor = n;
      }
      printf("Produto do maior pelo menor: %d\n", maior * menor);
    }
  } while (x);
  return 0;
}