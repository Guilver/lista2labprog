#include <stdio.h>

int main(void) {
  int n,f=1;
    printf("Digite um numero.\n");
    scanf("%d", &n);
  for(int i=2; i<=n;i++){
    f=(f*i);
  }
  printf("Fatorial: %d \n",f);
  return 0;
}