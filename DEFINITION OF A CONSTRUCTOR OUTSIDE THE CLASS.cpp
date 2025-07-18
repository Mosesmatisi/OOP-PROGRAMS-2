//DEFINITION OF A CONSTRUCTOR OUTSIDE THE CLASS
#include <iostream>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x,string y,int z);
};
Car :: Car(string x,string y,int z){
    brand = x;
    model = y;
    year = z;
}

int main(){
    Car myObj1("TOYOTA","AXIO",2016);
    
    cout<<"My Car Brand is "<<myObj1.brand<<endl;
    cout<<"My Car Model is "<<myObj1.model<<endl;
    cout<<"My Car was manufactured in the year "<<myObj1.year;
}
