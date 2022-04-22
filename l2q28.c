#include <stdio.h>

int main(void) {
  unsigned char x, y, temp;
  printf("Insira X\n");
  scanf(" %c", &x);
  do {
    printf("Insira Y\n");
    scanf(" %c", &y);
    if (y > 53)
      printf("Y deve ser menor que 5.\n");
  } while (y > 53);

  temp = x & 0b11110000;
  y = y | temp;

  printf("X= %c\nY= %d", x, y & 0b00001111);
  return 0;
}