#include<stdio.h>
int main(){
      int arr[]={2,1,4,5,7,9};
      for(int i=0;i<7;i++){//this is static
            printf("%d ",arr[i]);//to get address of all elem:arr+i, to get 3 seven times *arr+1,*(arr+i) will give all elem,while using arr[i] it will print elems but alsocreate a junk value
      }
      printf("%d",*arr);//just arr will point the address of the first elem,whereas using *arr will give first elem,using arr[x] where x is the index of the array will give the elem in the index
      //how do you find the dynamic size of an array
      printf("\n");
      int size= sizeof(arr)/sizeof(arr[0]);
      for(int i=0;i<size;i++){//this is static
            printf("%d ",arr[i]);
      }
      return 0;
}