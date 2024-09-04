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
        cout << node->data << "=>";
        node = node->next;
    }
    cout << "null" << endl;

}
int main()
//printing 1->2->3 manually
{
    Node* head = new  Node();
    head->data = 1;

    Node* second = new Node();
    second->data = 2;

    Node* third = new Node();
    third->data = 3;

    head->next = second;
    second->next = third;
    third->next = nullptr;

    printLlistElements(head);
    return 0;
}