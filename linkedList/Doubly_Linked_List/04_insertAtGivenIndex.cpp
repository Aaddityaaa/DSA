// Insertion at given index

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data, Node *prev = nullptr, Node *next = nullptr)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};

class DoublyLinkedList
{
private:
    Node *head;

public:
    DoublyLinkedList()
    {
        head = nullptr;
    }

    void insertionAtEnd(int val)
    {
        Node* temp = new Node(val);

        if (head == nullptr)
        {
            head = temp;
            return;
        }

        Node* curr = head;

        while (curr->next != nullptr)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->prev = curr;
    }

    void insertionAtMiddle(int val, int index)
    {
        Node *temp = new Node(val);

        if (head == nullptr)
        {
            head = temp;
            return;
        }

        // insertion at beginning
        if(index == 0){
            temp->next = head;
            head->prev = temp;
            head = temp;
            return;
        }

        Node *curr = head;
        int i=0;
        while (curr != nullptr && i < index)
        {
            curr = curr->next;
            i++;
        }
        if(curr == nullptr){
            cout<<"Index "<<index<<" not found\n";
            delete temp;
            return;
        }

        temp->next = curr;
        curr->prev->next = temp;
        temp->prev = curr->prev;
        curr->prev = temp;
    }

    void display()
    {
        Node *curr = head;
        while (curr != nullptr)
        {
            cout << curr->data << " <--> ";
            curr = curr->next;
        }

        cout << "NULL\n";
    }
};

int main()
{
    DoublyLinkedList list;
    list.insertionAtEnd(10);
    list.insertionAtEnd(15);
    list.insertionAtEnd(25);
    list.insertionAtEnd(30);
    list.insertionAtMiddle(20, 2);
    list.insertionAtMiddle(5,0);
    list.insertionAtMiddle(55,5);
    list.display();
}