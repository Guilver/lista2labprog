#include <stdio.h>

int main(void) {
  int n, maior = 0, menor = 0;
  do {
    printf("Digite um numero: (0 para sair)\n");
    scanf("%d", &n);
    if (maior == 0 && menor == 0) {
      maior = n;
      menor = n;
    }
    if (n) {
      if (maior < n) {
        maior = n;
      }
      if (menor > n) {
        menor = n;
      }

      printf("Maior: %d, Menor: %d. \n", maior, menor);
    }
  } while (n);
  return 0;
}