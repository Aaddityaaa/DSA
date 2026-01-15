#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data, Node* prev=nullptr, Node* next=nullptr){
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
};

class CircularLL{
    private:
    Node* head;
    public:
    CircularLL(){
        head = nullptr;
    }

    void insertAtEnd(int val){
        Node* temp = new Node(val);

        if(head == nullptr){
            head = temp;
            head->next = head;
            head->prev = head;
            return;
        }

        Node* curr = head;
        while(curr->next != head){
            curr = curr->next;
        }
        curr->next = temp;
        temp->prev = curr;
        temp->next = head;
        head->prev = temp;
    }

    void display(){
        Node* curr = head;
        do{
            cout<<curr->data<<" <-> ";
            curr = curr->next;
        }while(curr != head);
        cout<<"NULL\n";
    }
};

int main(){
    CircularLL list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.display();
}