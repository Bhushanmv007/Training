#include<stdio.h>
int reg(int n){
      int regs=(n*(n+1))/2+1; 
      return regs;
}
int main(){
      int n;
      printf("Enter the no of st line: ");
      scanf("%d",&n);
      int regions=reg(n);
      printf("max regions are: %d",regions);
      return 0;
}