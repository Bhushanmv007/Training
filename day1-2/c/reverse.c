//reversing a number 123
#include<stdio.h>
int reverse(int n){
      int ans=0;
      while(n>0){
            int digit =n%10;
            ans = ans*10+digit;
            n /=10;
      }
      return ans;
}
int main(){
      printf("Enter the number:");
      int n;
      scanf("%d", &n);
      int rev = reverse(n);
      printf("The reverse of %d is %d", n, rev);
      return 0;
}