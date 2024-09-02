// Length of the String

#include <iostream>
using namespace std;

// Function to find the length of the string using recursion
int stringLength(char* str) {
    // Base case: if the string is empty (null character encountered)
    if (*str == '\0') {
        return 0;
    }
    // Recursive case: move to the next character and add 1
    return 1 + stringLength(str + 1);
}

int main() {
    char* myString = "Hello, World!";
    
    // Calculate the length of the string
    int length = stringLength(myString);
    
    // Print the result
    cout << "The length of the string is: " << length << endl;
    
    return 0;
}