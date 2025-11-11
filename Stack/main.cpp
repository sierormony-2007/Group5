#include <stack>
#include <iostream>
template <typename T>
class Ex{
    public:
    T a;
    T getA(){
        return a;
    }
};

using namespace std;
int main(){
    Ex<int>obj;
    obj.a = 10.01;
    cout<<obj.getA();
}