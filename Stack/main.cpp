#include <stack>
#include <iostream>
#include "stack.hpp"
using namespace std;


// stack<char> temp;
// int main(){
// string s = "{}[]{}";
// isValid(s);
// cout << (isValid(s) ? "Valid" : "Invalid") << endl;
//   return 0;
// }
bool isBalance(string s){
  stack<char> st;
      for(int i=0; i<s.length(); i++){
        
        char c = s[i];
        if(c=='(' || c=='{' || c=='['){
          st.push(c);
        }else if(c=='(' || c=='{' || c=='['){
          if(st.empty()) 
          {return false;}
          char top = st.top();
          if((c==')' && top != '(') ||
             (c=='}' && top != '{') ||
             (c==']' && top != '[')){
               return false;
        }
        st.pop();

        }
      } return st.empty();
    }

int main(){
    string expr;
    cout<<"Enter expression: ";cin>>expr;
  
  if(isBalance(expr)){
    cout<<"valid"<<endl;
  }else{
    cout<<"invalid"<<endl;
  }
}
  