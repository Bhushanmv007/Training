#include <stdio.h>
int main(){
      for(int r=1;r<4;r++){
            for(int c=1;c<10;c++){
                  if(r==2 && c%4==0 || (r+c)%4==0){
                        printf("* ");
                  }
                  else{
                        printf("  ");
                  }
            }
            printf(" \n");
      }
}