#include <stdio.h>

int main(void) {
  int n, c, paulo = 0, renata = 0, branco = 0, nulo;
  do {
    printf("Escolha o candidato:\n");
    scanf("%d", &n);
    printf("Confirmar voto? [1] Sim [Outro] Não\n");
    scanf("%d", &c);
    if (c == 1 && n >= 0) {
      if (n == 5) {
        paulo++;
      } else if (n == 7) {
        renata++;
      } else if (n == 0) {
        branco++;
      } else if (n >= 0) {
        nulo++;
      }
    }
  } while (n >= 0);
  n = paulo + renata + branco + nulo;
  printf("Votos:\n Paulo: %.2f%%\n Renata: %.2f%%\n Branco: %.2f%%\n Nulo: "
         "%.2f%%\n",
         (float)paulo * 100 / n, (float)renata * 100 / n,
         (float)branco * 100 / n, (float)nulo * 100 / n);
  return 0;
}