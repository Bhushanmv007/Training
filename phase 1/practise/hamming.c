#include<stdio.h>
int hamming(int n){
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
      int n;
      printf("Enter the no:");
      scanf("%d",&n);
      int h=hamming(n);
      printf("hamming is:%d",h);
      return 0;
}