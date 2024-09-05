#include <iostream>
#include<queue>
using namespace std;

class Node {
    public:
    int key;
    Node* left;
    Node* right;
      
    Node(int data) {
        this->key = data;
        this->left = nullptr; 
        this->right = nullptr; 
    }
};

class BST{
    private:
    Node* root;
 // Helper function to recursively insert a key into the BST
    Node* insertRecursively(Node* root, int key){
        if(root == NULL){
            root = new Node(key);
            return root;
        }

        if(root->key > key){
            root->left = insertRecursively(root->left,key);
        }

        else if(root->key < key){
            root->right = insertRecursively(root->right,key);
        }
        return root;

    }

    bool searchRecursively(Node* root, int key){
        if(root == NULL){
            return false;
        }

        if(root->key > key){
            root->left = insertRecursively(root->left,key);
        }

        else if(root->key < key){
            root->right = insertRecursively(root->right,key);
        }
    }

    Node* findSuccessor(Node* node){
        Node* temp = node;
        while(temp->left!=NULL){
            temp = temp->left;
        }
        return temp;
    }
    
    Node* removeRecursively(Node* root, int key){
        // case 1:node with no child or 1 child
        if(root->left==NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //case 2:node with 2 children
        else{
            /*to find inorder successor of a tree find the target's right child's left most successor*/
            Node* temp = findSuccessor(root->right);
            root->key = temp->key;
            root->right = removeRecursively(root->right,temp->key);
        }
    
    }

    
    
    public:
    BST(){
        this->root = NULL;
    }

    void insert(int key){
        root = insertRecursively(root,key);
    }

    void search(int key){
        return searchRecursively(root,key);

    }

    void remove(int key){
        root = removeRecursively(root,key);
    }


};

int main(){
    BST bst;
    bst.insert(100);
    bst.insert(50);
    bst.search(50);
    return 0;
}

