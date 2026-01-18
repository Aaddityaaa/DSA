/* Preorder Traversal -> 
    1. First root node
    2. Left subtree
    3. Right subtree   */
    
#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int data, Node* left=NULL, Node* right=NULL){
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

class Tree {
    public:
    Node* root = NULL;

    Tree(){
        root = new Node(1);
        root->left = new Node(3);
        root->right = new Node(5);
        root->left->left = new Node(2);
        root->left->right = new Node(4);
        root->right->right = new Node(8);
    }

    void preOrder(Node* root){
        if(root == NULL){
            return;
        }
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
};

int main(){
    Tree t;
    cout<<"PreOrder traversal : ";
    t.preOrder(t.root);
}