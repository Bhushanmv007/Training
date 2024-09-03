#include<stdio.h>
int main(){
      FILE *fptr;
      char buffer[100];
      fptr = fopen("C:\\Users\\91812\\Desktop\\TNP\\day3\\c\\file\\jit.txt", "r");//copy the absolute path
      //check if ftpr is null
      if(fptr== NULL){
            return -1;
      }
      else{
            printf("Successfully loaded");
      }
      //fgets() , fscansf()
      while (fgets(buffer, sizeof(buffer), fptr) != NULL){
        printf("\n%s", buffer);
      }
      fclose(fptr);
      return 0;
}