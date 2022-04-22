#include <stdio.h>

int main(void) {
  int a, b, s = 0;
  printf("Digite o numero A: \n");
  scanf("%d", &a);
  printf("Digite o numero B: \n");
  scanf("%d", &b);
  if (b < a) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
  }
  for (int i = a; i <= b; i++) {
    if (i % 2 == 0) {
      s = s + i;
    }
  }
  printf("Somatorio dos numeros pares: %d\n", s);
  return 0;
}