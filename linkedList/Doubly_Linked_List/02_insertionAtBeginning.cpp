#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data, Node* prev=nullptr,  Node* next=nullptr){
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};

class DoublyLinkedList{
    private:
    Node* head;

    public:
    DoublyLinkedList(){
        head = nullptr;
    }

    void insertionAtBeginning(int val){
        Node* temp = new Node(val);

        if(head == nullptr){
            head = temp;
            return;
        }

        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    void display(){
        Node* curr = head;
        while(curr != nullptr){
            cout<<curr->data<<" <--> ";
            curr = curr->next;
        }

        cout<<"NULL\n";
    }
};

int main(){
    DoublyLinkedList list;
    list.insertionAtBeginning(20);
    list.insertionAtBeginning(40);
    list.insertionAtBeginning(60);
    list.display();
}