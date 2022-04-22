#include <stdio.h>

int main(void) {
  int n = 1, ant = 0;
  for (int i = 1; i <= 20; i++) {
    printf("[%d] ", n);
    n = ant + n;
    ant = n - ant;
  }
  return 0;
}