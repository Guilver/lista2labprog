#include <stdio.h>

int main(void) {
  int a;
  printf("Digite o numero: \n");
  scanf("%d", &a);

  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", a, i, a * i);
  }
  return 0;
}