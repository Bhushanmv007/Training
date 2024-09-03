// Question 1
// You are a software developer working on a high-tech inventory management system for a futuristic warehouse. This warehouse stores a wide variety of gadgets, each identified by a unique 5-digit product code. The system needs to quickly locate a specific gadget based on its product code to manage operations efficiently.

// However, the search function in the system has been acting up, and your task is to write a C++ program that will search for a specific product code in a list of codes. The twist? The list is stored in a slightly unconventional format: all the codes are concatenated into one long string, separated by commas. Your program should extract each product code and implement a linear search to find the required code.

// Task:
// Write a C++ program that:

// Takes a long string of comma-separated product codes (e.g., "12345,23456,34567,45678,56789") and a specific product code to search for.
// Extracts the individual product codes from the string and stores them in an array.
// Implements a linear search to check if the specific product code is present in the array.
// Outputs the position of the product code in the list if found, or a message saying the product code is not found.
// Constraints:

// The number of product codes in the string will not exceed 100.
// Each product code is a 5-digit number.
// The input string will be well-formed (i.e., no extra commas or spaces).


#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string input, target;
    
    // Input the product codes as a single comma-separated string
    cout << "Enter the product codes (comma-separated): ";
    getline(cin, input);
    
    // Input the target product code to search
    cout << "Enter the product code to search: ";
    cin >> target;
    
    stringstream ss(input);
    string code;
    int position = 1; // Start position from 1
    
    // Extract and check each product code directly from the stringstream
    while (getline(ss, code, ',')) {
        if (code == target) {
            cout << "Product code " << target << " found at position " << position << "." << endl;
            return 0; // Exit after finding the product code
        }
        position++;
    }
    
    // If we finish the loop and didn't find the product code
    cout << "Product code " << target << " not found." << endl;
    
    return 0;
}