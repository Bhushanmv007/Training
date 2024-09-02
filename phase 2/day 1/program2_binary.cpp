// You are a developer working on a high-performance search system for a large online bookstore. The bookstore's database contains a sorted list of book ISBNs (International Standard Book Numbers), and you need to quickly locate a specific book based on its ISBN.

// The bookstore's search feature requires a binary search algorithm to efficiently find the target ISBN in the sorted list. Your task is to write a C++ program that:

// Accepts a sorted list of ISBNs (representing the inventory of books in the bookstore).
// Allows the user to input a specific ISBN they want to search for.
// Performs a binary search to determine if the ISBN is present in the list.
// Outputs whether the ISBN was found and, if it was, the index where the ISBN is located in the list.
// Requirements:

// Implement the binary search algorithm to handle the search efficiently.
// The sorted array of ISBNs is already provided.
// Ensure that the program provides clear feedback on whether the ISBN exists in the list and its position if found.

#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(const int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; // Target found
        }
        
        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }
    
    // Target not found
    return -1;
}

int main() {
    // Example sorted array of ISBNs (for demonstration purposes)
    int isbnArray[] = {97801311, 97801323, 97801345, 97801351, 97801358, 97801362, 97801365};
    int size = sizeof(isbnArray) / sizeof(isbnArray[0]);
    
    int target;
    
    // Input the target ISBN to search for
    cout << "Enter the target ISBN to search for: ";
    cin >> target;
    
    // Perform binary search
    int index = binarySearch(isbnArray, size, target);
    
    // Output the result
    if (index != -1) {
        cout << "ISBN " << target << " found at index " << index << "." << endl;
    } else {
        cout << "ISBN " << target << " not found." << endl;
    }
    
    return 0;
}