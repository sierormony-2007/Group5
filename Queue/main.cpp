#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
    queue <char>q ;
    q.push('(');
    q.push(')');
    if(q.front() == '(' && q.back() == ')'){
        cout << "Matched" << endl;
    }
//     queue<char> q;
// if(q.empty()){
//     cout << "Queue is empty" << endl;
// }
// q.push('(');
// cout << "Push front: " << q.front() << endl;
//     q.push('t');
//     q.push('e');
//     q.push('s');
//     q.push('l');
//     cout << "front: " << q.front() << endl;
//     cout << "Back: " << q.back() << endl;

// q.pop();
// cout << "AFter del: " << q.front() << endl;

    return 0;
}