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
    if (i % 3 == 0) {
      s++;
    }
  }
  printf("Quantidade de numeros divisiveis por 3: %d\n", s);
  return 0;
}