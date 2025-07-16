//DEFINITION OF A METHOD OUTSIDE THE CLASS
#include <iostream>
using namespace std;
class MyClass{
    public:
    void myMethod();
};

void MyClass :: myMethod(){
    cout<<"My World!";
}

int main(){
    MyClass myM;
    myM.myMethod();
    return 0;
}
    
