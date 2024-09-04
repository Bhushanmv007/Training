#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
void printLlistElements (Node* node)
{
    while (node != nullptr)
    {
        cout << node->data << "->";
        node = node->next;
    }
    cout << "null" << endl;

}

void insertAtFront(Node* &head, int newValue)
{
    Node* newNode = new Node();
    newNode->data = newValue;
    //new node point to old head
    newNode->next = head;
    //new node is new head
    head = newNode;
}

void insertAtTail(Node* &head, int newValue)
{
    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = nullptr;
    if(head == nullptr)
    {
        head = newNode;
        return;
    }
    Node* last = head;
    while (last->next != nullptr)
    {
        last = last->next;
    }
    last->next = newNode;
}

int main()
//printing 1->2->3 manually
{
    //Node* head = new  Node();
    //head->data = 1;

    //Node* second = new Node();
    //second->data = 2;

    //Node* third = new Node();
    //third->data = 3;

    //head->next = second;
    //second->next = third;
    //third->next = nullptr;

    //printLlistElements(head);

    Node* head = nullptr;
    insertAtFront(head, 4);
    insertAtFront(head, 3);
    insertAtFront(head, 2);
    insertAtFront(head, 1);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    printLlistElements(head);
    return 0;
}