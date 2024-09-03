#include<stdio.h>
void count(int arr[],int size){
      int k=arr[0];
      for(int i=1;i<size;i++){
            if(arr[i]>k){
                  k=arr[i];
            }
      }
      int count[10]={0};
      for(int i=0;i<size;i++){
            count[arr[i]]++;
      }
      for(int i=1;i<k;i++){
            count[i] += count[i-1];
      }
      int output[size];
      for(int i=size-1;i>=0;i--){
            output[--count[arr[i]]]=arr[i];
      }
      for(int i=0;i<size;i++){
            arr[i]=output[i];
      }
}