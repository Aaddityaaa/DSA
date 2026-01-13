// Delete the node by given value

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
        Node *temp = new Node(val);

        if (head == nullptr)
        {
            head = temp;
            return;
        }

        Node *curr = head;

        while (curr->next != nullptr)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->prev = curr;
    }

    void deleteByValue(int x)
    {
        if (head == nullptr)
        {
            cout << "List is empty!";
            return;
        }

        Node *curr = head;
        // for 1st node
        if (curr->data == x)
        {
            // check for only node
            if (curr->next == nullptr)
            {
                head = nullptr;
            }
            else
            {
                head = curr->next;
                head->prev = nullptr;
            }
            cout << "Value " << x << " deleted from LL\n";
            delete curr;
            return;
        }
        while (curr != nullptr)
        {
            Node *del = curr;
            if (curr->data == x)
            {

                if (curr->next == nullptr)
                {
                    curr->prev->next = nullptr;
                }
                else
                {
                    curr->next->prev = curr->prev;
                    curr->prev->next = curr->next;
                }
                cout << "Value " << x << " deleted from LL\n";
                delete del;
                return;
            }
            curr = curr->next;
        }
        cout << "Value " << x << " not found in list\n";
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
    list.deleteByValue(25);
    list.deleteByValue(10);
    list.display();
}