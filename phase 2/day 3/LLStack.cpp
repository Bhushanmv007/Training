#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class Stack{
    Node* top;

    public:
    Stack(){
        top = NULL;
    }

    void push(int val){
        Node* n = new Node(val);
        n->next = top;
        top = n;
    }

    void pop(){
        if(top == NULL){
            cout << "Stack Underflow!" << endl;
            return;
        }
        Node* todelete = top;
        top = top->next;
        delete todelete;
    }

    int peek(){
        if(top == NULL){
            cout << "Stack is Empty!" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty(){
        return top == NULL;
    }

    void display(){
        Node* temp = top;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    Stack s;
    cout << "Push Operation: " << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();

    cout << "Pop Operation: " << endl;
    s.pop();
    s.display();

    cout << "Peek Operation: " << endl;
    cout << "Top element is: " << s.peek() << endl;

    cout << "Is Stack Empty: " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}