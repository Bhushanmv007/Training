#include<stdio.h>
int hammingWeigt(int n){
      int cnt=0;
      while(n>0){
            if(n&1){
                  cnt++;
            }
            n=n>>1;
      }
      return cnt;
}

int main(){
      printf("enter the num: \n");
      int n;
      scanf("%d",&n);
      int hw=hammingWeigt(n);
      printf("The hamming weight of %d is : %d",n,hw);
      return 0;
}