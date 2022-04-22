#include <stdio.h>

int main(void) {
  int a, b;
  printf("Limite A: \n");
  scanf("%d", &a);
  printf("Limite B: \n");
  scanf("%d", &b);
  if (b < a) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
  }

  for (int i = a; i <= b; i++) {
    if (i % 4 == 0) {
      printf("[%d] ", i * i);
    }
  }
  return 0;
}