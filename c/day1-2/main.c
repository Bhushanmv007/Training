#include<stdio.h>
#include<stdbool.h>
int main(){
      float data=2.4f;
      bool status =true;
      printf("the status is:%d",status); 
      printf("the float size is: %zu",sizeof(data));
      printf("\nhello world\n");
//
      printf("%d", 6|9);
//left right operator 
      printf("\n%d",10<<2);
//not operator answer should be 10 technically but ans will come as -6 
      printf("\n%d", ~5);// use formalla ~n=-n-1
//array using xor for non-repeating number 
      int arr[]={1,1,2,2,6,6,1,7,7};
      int res= 0;
      for (int i=0;i<7;i++){
            res=res ^ arr[i];
      }
      printf("\nthe non reapting elem is:%d",res);
//conditional stmts 
      int a=10;
      while (a > 20) {
        printf("%d ", a);
        a--;  // Decrementing a to eventually exit the loop
    }
    printf("\n");  // Adding a newline for clarity
    
    // Resetting 'a' for the do-while loop demonstration
    a = 30;
    
    // Do-while loop
    do {
        printf("%d \n", a);
        a++;  // Incrementing a to eventually exit the loop
    } while (a < 35);

//common question in TCS for interview:to draw a heart using stars(pattern question)
      //divide into parts 
      for(int r=0;r<6;r++){
            for(int c=0;c<7;c++){
                  if(r==0 && c%3!=0 || 
                  r==1 && c%3==0 ||
                  r-c==2 || r+c==8){
                        printf(" * ");
                  }
                  else{
                        printf("   ");
                  }
            }
            printf("\n");
      } 
//zero-one pattern 1 
#include <stdio.h>
void zeroOne(int); // Function Prototype
zeroOne (5);
return 0;

//pattern 2 zig zag

      for(int r=1;r<=3;r++){
            for(int c=1;c<9;c++){
                  if((r+c)%4==0 || r==2 && c%4==0){
                        printf(" * ");
                  }
            }
            printf(" \n ");
      }

      return 0;
}
void zeroOne(int n){ // Function Definition
// Function Body
     for (int r=0; r<n; r++){
         for (int c=0; c<=r; c++){
             if ((r+c)%2 == 0) {
                  printf(" 1 ");
             } else{
                 printf(" 0");
             }
         }
         printf("\n");
     }
}