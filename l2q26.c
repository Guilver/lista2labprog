#include <stdio.h>

int main(void) {
  int binario, b[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0}, j;
  for (int i = 1; i <= 256; i++) {
    binario = i;
    j = 0;
    do {
      if (binario % 2 == 1) {
        // printf("1");
        b[j] = 1;
      }
      if (binario % 2 == 0) {
        // printf("0");
        b[j] = 0;
      }
      j++;
      binario = binario / 2;

    } while (binario);

    printf("Decimal: %d. Binario: ", i);
    for (int k = 8; k >= 0; k--) {
      printf("%d", b[k]);
    }
    printf(". Octal: %o. Hexadecimal: %X.\n", i, i);
  }
  return 0;
}