#include <stdio.h>

int main(void) {
  int a = 0, b = 0;

  for (int i = 0; i <= 200; i++) {
    if (i % 3 == 0 && i <= 100) {
      a = a + i;
    }
    if (i % 5 == 0 && i >= 100) {
      b = b + i;
    }
  }
  printf("Divisiveis por 3: %d\nDivisiveis por 5: %d\n", a, b);
  return 0;
}