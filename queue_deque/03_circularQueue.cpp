// Implementing circular queue without C++ STL

#include<iostream>
using namespace std;

// FIFO Principal
class Queue{
    public:
    int queue[6];
    int front, rear;

    Queue(){
        front = rear = -1;
    }
    bool isEmpty(){
        return (front == -1 && rear == -1);
    }
    bool isFull(){
        return (rear + 1) % 6 == front;
    }

    void insert(int val){
        // queue is empty
        if(isFull()){
            cout<<"Queue Overflow\n";
            return;
        }

        if(isEmpty()){
            front = rear = 0;
        }else{
            rear = (rear + 1) % 6;
        }

        queue[rear] = val;
        cout << val << " inserted\n";
    }
    void remove(){
        if(isEmpty()){
            cout<<"Queue empty\n";
            return;
        }
        if(front == rear){
            queue[front] = 0;
            front = rear  = -1;
            cout<<"removed\n";
            return;
        }
        queue[front] = 0;
        front = (front + 1) % 6;
        cout<<"removed\n";
    }
};

int main(){
    Queue q;
    cout<<q.isEmpty()<<"\n";
    q.insert(5);
    q.insert(6);
    q.insert(7);
    q.insert(8);
    q.insert(9);
    q.insert(4);
    cout<<q.isEmpty()<<"\n";
    cout<<q.isFull()<<"\n";
    q.remove();
    cout<<q.isFull()<<"\n";
    q.insert(50);
    cout<<q.isFull()<<"\n";
    q.insert(60);
    q.remove();
    q.insert(60);
}