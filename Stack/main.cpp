#include <stack>
#include <iostream>
#include "stack.hpp"
using namespace std;



int isBalance(string s){
  stack<char> st;

      for(int i=0; i<s.length(); i++){
        char c = s[i];
      
        if(c=='(' || c=='{' || c=='['){
          st.push(c);
        }else if(c==')' || c=='}' || c==']'){
          if(st.empty()) 
          {return i+1;}
          char top = st.top();
          if((c==')' && top != '(') ||
             (c=='}' && top != '{') ||
             (c==']' && top != '[')){
               return i+1;
        }
        st.pop();
        }
        
      } 
      if(!st.empty()){
        return s.length();
      }
      
      return 0;
    }

int main(){
    string expr;
    cout<<"Enter expression: ";
    cin>>expr;
  int errorPos = isBalance(expr);
  if(errorPos == 0){
    cout<<"valid"<<endl;
  }else{
    cout<<"Invalid"<<endl;
    cout<<"Error at position "<<errorPos<<endl;
  }
    return 0;
}
  