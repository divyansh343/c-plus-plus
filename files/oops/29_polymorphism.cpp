// polymorphism
// it's of two types

// 1. compile time polymorphism ( early binding )

// it is achieved by :
// 1.1 function overloading
// 1.2 operator overloading

// 2. runtime polymorphism ( late binding )

// it is achieved by :
// 2.1 virtual functions

#include <iostream>
using namespace std;

void greet(void){
    cout << "hall of lame" << endl;
}
void greet(string str){
    cout << str << endl;
}
int main () {
    greet();
    greet("loda lashan");
    return 0;
}