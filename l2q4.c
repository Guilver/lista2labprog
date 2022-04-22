#include <stdio.h>

int main(void) {
  int jose = 150, pedro = 110, anos = 0;

  do {
    jose = jose + 2;
    pedro = pedro + 3;
    anos++;
  } while (jose >= pedro);

  printf("Anos: %d \n", anos);
  return 0;
}