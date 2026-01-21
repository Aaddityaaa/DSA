#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data, Node *left = nullptr, Node *right = nullptr)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

class BinarySearchTree
{
public:
    Node *root = nullptr;

    BinarySearchTree()
    {
        root = nullptr;
    }

    Node *insert(Node *root, int val)
    {
        if (root == nullptr)
        {
            return new Node(val);
        }
        // Insert in left subtree
        if (val <= root->data){
            root->left = insert(root->left, val);
        }
        // Insert in right subtree
        else{
            root->right = insert(root->right, val);
        }

        return root;
    }

    void search(Node* root,int val){
        if (root == nullptr){
            cout<<"Element not found!\n";
            return;
        }
        if(root->data == val){
            cout<<"Element found\n";
            return;
        }
        if(val <= root->data){
            search(root->left, val);
        }else{
            search(root->right, val);
        }
    }

    // deletion in binary search tree
    Node* del(Node* root, int val){
        if(root == nullptr){
            return root;
        }
        if(val <= root->data){
            root->left = del(root->left, val);
        }
        else if(val > root->data){
            root->right = del(root->right, val);
        }
        else{
            if(root->left == nullptr){
                return root->right;
            }
            if(root->right == nullptr){
                return root->left;
            }
        }
    }

    void inOrder(Node *root)
    {
        if (root == nullptr)
        {
            return;
        }
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
};

int main()
{
    BinarySearchTree bst;
    bst.root = bst.insert(bst.root, 20);
    bst.root = bst.insert(bst.root, 15);
    bst.root = bst.insert(bst.root, 25);
    bst.root = bst.insert(bst.root, 10);
    bst.root = bst.insert(bst.root, 18);
    bst.root = bst.insert(bst.root, 23);
    bst.root = bst.insert(bst.root, 30);

    cout << "Inorder Traversal : ";
    bst.inOrder(bst.root);
    cout<<"\n";
    bst.search(bst.root,20);
    bst.search(bst.root,40);
    bst.search(bst.root,23);
}

/*
  In Binary Search Tree ->
    . inOrder Traversal
    . Print Binary Search Treen in ascending order
    . Check whether bst is correct or not
  all are same because inOrder travesal print bst in
  ascending order and if it not print in ascending order
  that means our bst is not correct
  */
