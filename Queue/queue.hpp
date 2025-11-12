#include <iostream>
#include <string>
using namespace std;



struct Node {
    int data;
    Node* next;
    Node* front;
};

class Queue {
    Node* head;  // dequeue from here
    Node* tail;  // enqueue here
    int length;
    
    
public:
    
    Queue() : head(nullptr), tail(nullptr), length(0) {}
    
    void enqueue( int  x) {
        Node* newNode = new Node{x, nullptr};
        
        if (tail == nullptr) {
            // Empty queue
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }
    
    int dequeue() {
        if (head == nullptr) return -1; // Empty
        
        Node* temp = head;
        int value = head->data;
        head = head->next;
        
        if (head == nullptr) {
            tail = nullptr; // Queue became empty
        }
        
        delete temp;
        length--;
        return value;
    }
    void display(){
        if(head == nullptr){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node* cur = head;
        while (cur != nullptr)
        {
            /* code */
            cout<<cur->data<<" ";
            cur = cur->next;
        }
        
    }
    void showfront(){
        if(head == nullptr){
            cout<<"empty "<<endl;
            return;
        }
        Node* front = head;
        cout<<"View front customer " << front->data << endl;

    }
    void showRear(){
        if(length == 0){
            showfront();
        }
        Node* rear = tail ; 
        cout<<"View rear customer: "<<rear->data << endl;
    }
    void clear(){
        while(head != nullptr){
            dequeue();
        }

    }
    void search(int pos){
        Node* cur = head;
        int index = 1;
        while (cur != nullptr)
        {
            /* code */
            if(index == pos){
                cout<<"Customer found at position "<<pos<<": "<<cur->data<<endl;
                return;
            }
            cur = cur->next;
            index++;
        }
        
    }
    
    int size() { return length; }
};

