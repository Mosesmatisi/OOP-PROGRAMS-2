//DEFINITION OF A METHOD INSIDE THE CLASS
#include <iostream>
using namespace std;
class MyClass{
    public:
    void myMethod(){
        cout<<"Hello World!";
    }
};
int main(){
    MyClass myM;
    myM.myMethod();
    return 0;
}

