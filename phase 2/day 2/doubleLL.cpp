/*  Doubly Linked List Code:*/

#include<iostream>
using namespace std;

class Node{
    public:
    int Data;
    Node* Next;
    Node* Prev;

    Node(int val)
    {
        this->Data = val;
        this->Next = NULL;
        this->Prev = NULL;
    }
};

void insertAtHead(int val, Node* &head)
{
    Node* n = new Node(val);
    n->Next = head;
    if(head!=NULL)
    {
        head->Prev = n;
    }
    head = n;
}

void insertAtTail(int val, Node* &head)
{
    Node* n = new Node(val);
    if(head==NULL)
    {
        head = n;
        return ;
    }
    Node* temp = head;
    while(temp->Next!=NULL)
    {
        temp = temp->Next;
    }
    temp->Next = n;
    n->Prev = temp;
}

int getCurrSize (Node * head)
{
  int size = 0;

  while (head != NULL)
    {
      head = head->Next;
      size++;
    }
  return size;
}

void insertAtPosition(int val, int pos, Node* &head)
{
    int size = getCurrSize(head);
    Node* n = new Node(val);
    if(pos<0 || pos > size)
    {
        cout << "Get Lost!" << endl;
    }
    else if(pos == 0)
    {
        insertAtHead(val, head);
    }
    else
    {
        Node* temp = head;
        while(--pos)
        {
            temp = temp->Next;
        }
        n->Next = temp->Next;
        n->Prev = temp;
        temp->Next->Prev = n;
        temp->Next = n;
    }
}

void deleteAtHead(Node* &head) {
    if(head == NULL) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    Node* temp = head;
    head = head->Next;
    if(head != NULL) {
        head->Prev = NULL;
    }
    delete temp;
}


void deleteByVal(int val, Node* &head) {
    Node* temp = head;
    while(temp != NULL && temp->Data != val) {
        temp = temp->Next;
    }
    if(temp == NULL) {
        cout << "Value not found in the list." << endl;
        return;
    }
    if(temp->Prev != NULL) {
        temp->Prev->Next = temp->Next;
    }
    if(temp->Next != NULL) {
        temp->Next->Prev = temp->Prev;
    }
    if(temp == head) {
        head = head->Next;
    }
    delete temp;
}

void display(Node* head)
{
    while(head!=NULL)
    {
        cout << head->Data << " ";
        head = head->Next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    // Inserting elements
    insertAtTail(1, head);
    insertAtTail(2, head);
    insertAtTail(3, head);
    insertAtTail(4, head);
    insertAtTail(5, head);
    insertAtHead(10, head);
    insertAtPosition(113, 3, head); // Insert 113 at position 3

    // Displaying the list
    cout << "Initial List: ";
    display(head);

    // Deleting elements
    deleteAtHead(head); // Delete the head node
    deleteByVal(4, head); // Delete node with value 4

    // Displaying the updated list
    cout << "Updated List: ";
    display(head);

    return 0;
}