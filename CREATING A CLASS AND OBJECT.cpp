//CREATING A CLASS AND AN OBJECT
#include <iostream>
using namespace std;
class MyClass{
    public:
    int myNum;
    string myString;
};
int main(){
    MyClass myObj;
    
    myObj.myNum = 15;
    myObj.myString = "Some Men.";
    
    cout<<"My Number is: "<<myObj.myNum<<endl;
    cout<<"My Text is: "<<myObj.myString;
    return 0;
}
    
    

    