#include <stack>
#include <iostream>
using namespace std;
//balance bracket using stack implementation
struct Node
{
    /* data */
    char data;
    Node* next;
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
        if(top == nullptr) return;
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


// bol isValid(string s) {

    
// // stack<char> temp;
// // for (char c : s) {
// //     if (c == '(' || c == '{' || c == '[') {
// //         temp.push(c);
// //     } else {
// //         if (temp.empty()) return false;
// //         char top = temp.top();
// //         if ((c == ')' && top != '(') ||
// //             (c == '}' && top != '{') ||
// //             (c == ']' && top != '[')) {
// //             return false;
// //         }
// //         temp.pop();
// //     }  
// // }
// // return temp.empty(); 
// };