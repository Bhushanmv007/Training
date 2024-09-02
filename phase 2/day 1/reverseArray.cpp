#include <iostream>
using namespace std;

// Function to print array elements in reverse order using recursion
void printReverse(int arr[], int index, int size) {
    // Base case: when index reaches the size of the array
    if (index == size) {
        return;
    }
    // Recursive call: move to the next element
    printReverse(arr, index + 1, size);
    // Print the current element after the recursive call
    cout << arr[index] << " ";
}
    
int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    
    // Print the array elements in reverse order
    cout << "Array elements in reverse order: ";
    printReverse(myArray, 0, size);
    
    return 0;
}