#include<stdio.h>
int main(){
      FILE *fptr;
      char buffer[100];
      fptr = fopen("C:\\Users\\91812\\Desktop\\TNP\\c\\day3\\file\\jit.txt", "w");//copy the absolute path, only change is mode i.e 'w' , when you have to appemd use a what append does is updates without deleting already existing data
      //check if ftpr is null
      if(fptr== NULL){
            return -1;
      }
      else{
            printf("Successfully loaded");
      }
      fprintf(fptr,"i like java\n");
      fclose(fptr);
      return 0;
}