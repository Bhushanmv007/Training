//see notes for understanding the topic
//    IMP FOR INTERVIEW QUESTION
#include<stdio.h>
void countSort(int arr[], int size){
      //find the max value
      int k=arr[0];
      for(int i=1;i<size;i++){
            if(arr[i]>k){
                  k=arr[i];
            }
      }
      //create a count array of (0-9) tem elem
      int count[10] = {0};
      //calculate the occurance of each array
      for(int i=0;i<size;i++){
            count[arr[i]]++;
      }
      //calculate the cumulative count (skip the first elem)
      for(int i=1;i<=k;i++){
            //current = current + previous
            count[i] += count[i-1];
      }
      //create an output array same size as the input array
      int output[size];
      //SRS Doc Sample
      /*
      * Start from the end of the array
      * find the array element
      * find the cumulative count of the element in the count array
      * decrement the count by 1
      * go to the output array at that particular index
      * Store the input element at that index in the output array
      */
      for (int i=size-1; i>=0; i--){
            output[--count[arr[i]]] = arr[i];
      }
      // Copy the output back to the input array
      for (int i=0; i<size; i++){
          arr[i] = output[i];
      }
}
int main(){
      int arr[]={1,3,2,3,4,1,6,4,3};
      int size=sizeof(arr)/sizeof(arr[0]);
      printf("Before sorting: \n");
      for (int i=0;i<size;i++){
            printf("%d ",arr[i]);
      }
      printf("\n");
      countSort(arr, size);
      printf("After Sorting:\n");
      for (int i=0; i<size; i++){
          printf("%d ", arr[i]);
      }
      return 0;
}