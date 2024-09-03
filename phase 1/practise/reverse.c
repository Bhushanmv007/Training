#include<stdio.h>
int reverse(int n){
      int ans=0;
      while(n>0){
            int digit=n%10;
            ans=ans*10+digit;
            n=n/10;
      } 
      return ans;
}
int main(){
      int n;
      printf("Enter the number: ");
      scanf("%d",&n);
      int r=reverse(n);
      printf("Reverse is: %d",r);
      return 0;
}