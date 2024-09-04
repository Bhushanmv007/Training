// Array Stack:

#include<iostream>
#define n 10
using namespace std;

class Stack{
    public:
    int *arr;
    int top;

    Stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int val){
        if(top==n-1){
            cout << "Stack Overflown" << endl;
            return ;
        }
        top++;
        arr[top] = val;
    }

    void pop(){
        if(top==-1){
            cout << "Stack Underflown" << endl;
            return ;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout << "Stack Underflown" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty(){
        return top==-1;
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    cout << "Top is: " << s.Top() << endl;
    s.pop();
    cout << "Top is: " << s.Top() << endl;
    s.pop();
    s.pop();
    cout << s.isEmpty();
    return 0;
}