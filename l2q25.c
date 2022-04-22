#include <stdio.h>

int main(void) {
  float pi;

  for(int j=2;j<=100;j++){
  for (int i = 1; i <= j; i++) {
    if(i==1){
      pi=4;
    }else if(i%2==0){
      pi=pi-(float)4/(2*i-1);
    }else{
      pi=pi+(float)4/(2*i-1);
    }
  }
  printf("Pi aproximado por %d termos= %f\n",j-1,pi);
    }
  return 0;
}