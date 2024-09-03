#include<stdio.h>
int * function(){
      int x=10;
      return &x;
}
int main(){
      int *ptr = function();
      printf("The value of x is %d", ptr);
      return 0;
}
