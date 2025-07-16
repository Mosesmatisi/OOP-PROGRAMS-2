//CREATING A CLASS AND AN OBJECT
#include <iostream>
using namespace std;
class MyClass{
   public:
   int myNum;
   string myString;
};
int main(){
    MyClass myObj1;
    myObj1.myNum = 2000;
    myObj1.myString = "Mr. John";
    
    MyClass myObj2;
    myObj2.myNum = 1800;
    myObj2.myString= "Mrs. James";
    
    MyClass myObj3;
    myObj3.myNum = 1000;
    myObj3.myString = "Mr. Kingori";
    
    cout<<"My Name is: "<<myObj1.myString<<endl;
    cout<<"My Line Number is: "<<myObj1.myNum<<endl<<endl;
    
    cout<<"My Name is: "<<myObj2.myString<<endl;
    cout<<"My Line Number is: "<<myObj2.myNum<<endl<<endl;
    
    cout<<"My Name is: "<<myObj3.myString<<endl;
    cout<<"My Line Number is: "<<myObj3.myNum<<endl;
    
    return 0;
}
    


    