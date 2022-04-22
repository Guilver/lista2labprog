#include <stdio.h>

int main(void) {
  int n;
  do {
    printf("Digite um numero entre 1 e 7. 0 para sair\n");
    scanf("%d", &n);
    switch (n) {
    case 1:
      printf("Domingo\n");
      break;
    case 2:
      printf("Segunda\n");
      break;
    case 3:
      printf("Terça\n");
      break;
    case 4:
      printf("Quarta\n");
      break;
    case 5:
      printf("Quinta\n");
      break;
    case 6:
      printf("Sexta\n");
      break;
    case 7:
      printf("Sabado\n");
      break;
    }
    if (n > 7||n<0)
      printf("Numero invalido\n");
  } while (n != 0);
  return 0;
}