// Linked List - Singly LinkedList

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

class LinkedList{
    Node* head;

    public:
    LinkedList(){
        this->head = NULL;
    }

    void insertAtHead(int val){
        Node* n = new Node(val);
        n->next = head;
        head = n;
    }

    void insertAtTail(int val){
        Node* n = new Node(val);
        if(head==NULL){
            head = n;
            return ;
        }
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = n;
    }

    int getSize(){
        int size = 0;
        Node* temp = head;
        while(temp!=NULL){
            temp= temp->next;
            size++;
        }
        return size;
    }

    void insertAtPos(int val, int pos){
        int size = getSize();
        if(pos<0 || pos>size){
            cout << "Get Lost" << endl;
        }else if(pos==0){
            insertAtHead(val);
        }
        else{
            Node* n = new Node(val);
            Node* temp = head;
            while(--pos){
                temp = temp->next;
            }
            n->next = temp->next;
            temp->next = n;
        }
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void deleteAtHead(){
        if(head==NULL){
            cout << "Nothing to Delete!" << endl;
            return ;
        }
        Node* todelete = head;
        head = head->next;
        delete todelete;
    }

    void deletebyVal(int val){
        if(head==NULL){
            cout << "Nothing to Delete!" << endl;
            return ;
        }
        if(head->data==val){
            deleteAtHead();
            return ;
        }

        Node* temp = head;
        while(temp->next->data != val){
            temp = temp->next;
        }
        Node* todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
    }
};


int main(){
    LinkedList ll;
    ll.insertAtHead(10);
    ll.insertAtHead(20);
    ll.insertAtHead(30);
    ll.display();

    ll.insertAtTail(40);
    ll.insertAtTail(50);
    ll.display();

    ll.insertAtPos(100, 0);
    ll.display();

    ll.deleteAtHead();
    ll.display();

    ll.deletebyVal(10);
    ll.display();

    return 0;
}