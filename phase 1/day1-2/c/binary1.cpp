// different approach for binary search
#include<stdio.h>
using namespace std;
int binarySearchRecursion(int arr[], int high, int low, int key){
    if (low <= high){
        int mid = low + (high - low)/2;
        if (arr[mid] == key){
            return mid;
        } else if (arr[mid] > key){
            return binarySearchRecursion(arr, mid-1, low, key);
        } else{
            return binarySearchRecursion(arr, high, mid+1, key);
        }
    }
    return -1;
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout << binarySearchRecursion(arr, n-1, 0, 5);
    return 0;
}