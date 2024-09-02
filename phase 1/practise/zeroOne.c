#include <stdio.h>
int main(){
      for (int r=0; r<5; r++){
         for (int c=0; c<=r; c++){
             if ((r+c)%2 == 0) {
                  printf(" 1 ");
             } else{
                 printf(" 0 ");
             }
         }
         printf("\n");
     }
}