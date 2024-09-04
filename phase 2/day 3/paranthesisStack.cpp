#include <iostream>
#include <string>
using namespace std;

// Custom stack implementation using arrays
class MyStack {
private:
    char* data;   // Array to store stack elements
    int capacity; // Maximum capacity of the stack
    int top_index; // Index of the top element in the stack

public:
    // Constructor to initialize the stack with a given capacity
    MyStack(int cap) {
        capacity = cap;
        data = new char[capacity];
        top_index = -1; // Initialize top_index to -1 (empty stack)
    }

    // Destructor to free dynamically allocated memory
    ~MyStack() {
        delete[] data;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return (top_index == -1);
    }

    // Function to push an element onto the stack
    void push(char val) {
        if (top_index == capacity - 1) {
            cout << "Stack Overflow: Cannot push more elements.\n";
            return;
        }
        data[++top_index] = val; // Increment top_index and then add the value
    }

    // Function to pop the top element from the stack
    char pop() {
        if (isEmpty()) {
            cout << "Stack Underflow: Cannot pop from empty stack.\n";
            return '\0'; // Return null character for an empty stack
        }
        return data[top_index--]; // Return the top element and then decrement top_index
    }
};

// Function to check if parentheses in the expression are balanced using custom stack
bool isBalanced(string expression) {
    MyStack stack(expression.length()); // Create a stack with capacity equal to the length of the expression

    // Traverse through each character in the expression
    for (char ch : expression) {
        if (ch == '(' || '{' || '[') {
            stack.push(ch); // Push to stack for opening parenthesis
        } else if (ch == ')') {
            if (stack.isEmpty()) {
                return false; // Unmatched closing parenthesis
            }
            stack.pop(); // Matched closing parenthesis, pop from stack
        }
    }

    return stack.isEmpty(); // Expression is balanced if stack is empty
}

// Main function to test the isBalanced function using custom stack
int main() {
    // Test cases
    string expr1 = "()";
    string expr2 = "(())";
    string expr3 = "(()())";
    string expr4 = "((()))";
    string expr5 = "(()";
    string expr6 = "())";
    string expr7 = "";

    cout << "Expression: " << expr1 << " is balanced? " << (isBalanced(expr1) ? "Yes" : "No") << endl;
    cout << "Expression: " << expr2 << " is balanced? " << (isBalanced(expr2) ? "Yes" : "No") << endl;
    cout << "Expression: " << expr3 << " is balanced? " << (isBalanced(expr3) ? "Yes" : "No") << endl;
    cout << "Expression: " << expr4 << " is balanced? " << (isBalanced(expr4) ? "Yes" : "No") << endl;
    cout << "Expression: " << expr5 << " is balanced? " << (isBalanced(expr5) ? "Yes" : "No") << endl;
    cout << "Expression: " << expr6 << " is balanced? " << (isBalanced(expr6) ? "Yes" : "No") << endl;
    cout << "Expression: " << expr7 << " is balanced? " << (isBalanced(expr7) ? "Yes" : "No") << endl;

    return 0;
}