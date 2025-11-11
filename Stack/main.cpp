#include <stack>
#include <iostream>
#include "stack.hpp"
using namespace std;
stack<char> temp;
int main(){
string s = "(}[]{}";
isValid(s);
cout << (isValid(s) ? "Valid" : "Invalid") << endl;
  return 0;
}