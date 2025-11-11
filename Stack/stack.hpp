#include <stack>
#include <iostream>
using namespace std;
struct Node
{
    /* data */
    char data;
    Node* next;
    Node* top;
};

class Stack{
    public:
    Node* top;
    void push(char c){
        Node* newNode = new Node();
        newNode->data = c;
        newNode->next = top;
        top = newNode;
    }
    Node* pop(){
        if(top == nullptr) 
        {return nullptr;}
        Node* temp = top;
        top = top->next;
        return temp;
    }
    char peek(){
        if(top == nullptr) return '\0';
        return top->data;
    }
    bool isEmpty(){
        return top == nullptr;
    }

   
};


