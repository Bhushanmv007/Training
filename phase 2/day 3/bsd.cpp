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

void pre(Node* root) {
    if (root == NULL) {
        return;
    }
    // Pre-order traversal
    cout << root->data << " ";
    pre(root->left);
    pre(root->right);
}

    // In-order traversal
void in(Node* root) {
    if (root == NULL) {
        return;
    }    
    in(root->left);
    cout << root->data << " ";
    in(root->right);
}
    // Post-order traversal
void post(Node* root) {
    if (root == NULL) {
        return;
    }    
    post(root->left);
    post(root->right);
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
    pre(root);
    cout << "\n The tree is created with in-order: \n";
    in(root);
    cout << "\n The tree is created with post-order: \n";
    post(root);
    return 0;
}
