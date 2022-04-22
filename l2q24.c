#include <stdio.h>

int main(void) {
  int h, c1, c2;

  for(int i=1;i<=500;i++){
    for(int j=1;j<=500;j++){
      for(int k=1;k<=500;k++){
        if(k*k==(i*i+j*j)){
          printf("Tripla: C1=[%d] C2=[%d] H=[%d] \n",i,j,k);
        }
      }
    }
  }
  
  return 0;
}