#include<iostream>
using namespace std;
class Node{
      public:
      int data;
      Node* left;
      Node* right;
      Node(int value){
            data = value;
            left = right = nullptr;
      }
};
int main (){
      Node* root = new Node(1);
      root->left = new Node(2);
      root->right = new Node(3);
      root->left->left=
      root->l
}