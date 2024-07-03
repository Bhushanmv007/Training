#include <stdio.h>
int findMax(int arr[], int n);
void radixSort(int arr[], int n);
void countSort(int arr[], int n, int exp);
int main() {
    int arr[] = {326, 99, 2, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    radixSort(arr, size);
    for (int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
int findMax(int arr[], int n){
    int max = arr[0];
    for (int i=1; i<n; i++){
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
void radixSort(int arr[], int n){
    int max = findMax(arr, n);
    for (int exp = 1; max / exp > 0; exp *= 10){
        countSort(arr, n, exp);
    }
}
void countSort(int arr[], int n, int exp){
    int output[n];
    int count[10] = {0};
    for (int i=0; i<n; i++){
        count[(arr[i]/exp)%10]++; //326/1= 326%10 6
    }
    for (int i = 1; i < 10; i++){
        count[i] += count[i-1];
    }
    for (int i=n-1; i>=0; i--){
        output[--count[(arr[i]/exp)%10]] = arr[i];
    }
    for (int i=0; i<n; i++){
        arr[i] = output[i];
    }
}