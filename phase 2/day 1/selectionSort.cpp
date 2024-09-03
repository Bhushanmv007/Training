#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
      int i,j,min;
      for(i=0;i<n-1;i++){
            min=i;
            for(j=i+1;j<n;j++){
                  if(arr[j] < arr[min])
                        min=j;
            }
            if(min!=i)
            swap(arr[min],arr[i]);
      }
}

void printArray(int arr[], int n){
      for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
      }
}

int main ()
{
      int i, j,temp,pass=0;
      int arr[10] = {10,2,0,14,43,25,18,1,5,45};
      int n = sizeof(arr) / sizeof(arr[0]);
      selectionSort(arr, n);
      cout << "Sorted array: \n";
      printArray(arr, n);
      return 0;
}