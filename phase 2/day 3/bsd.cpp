#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;
      
    Node(int data) {
        this->data = data;
        this->left = nullptr; 
        this->right = nullptr; 
    }
};

Node *createNode(int val) {
    Node* n = new Node(val);
    return n;
}

void display(Node* root) {
    if (root == NULL) {
        return;
    }
    // Pre-order traversal
    cout << root->data << " ";
    display(root->left);
    display(root->right);
    // In-order traversal
    display(root->left);
    cout << root->data << " ";
    display(root->right);
    // Post-order traversal
    display(root->left);
    display(root->right);
    cout << root->data << " ";

}

int main() {
    // Level 1
    Node* root = createNode(1);

    // Level 2
    root->left = createNode(2);
    root->right = createNode(3);

    // Level 3
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    // Level 4
    root->right->left = createNode(6); // Added left child for 3
    root->right->right = createNode(7); // Right child for 3
    root->left->right->right = createNode(9); // Right child for 5
    root->left->left->left = createNode(10); // Left child for 4

    cout << "The tree is created with pre-order: \n";
    display(root);
    
    return 0;
}
