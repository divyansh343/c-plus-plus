#include <iostream>
using namespace std;

int main () {
    // int num = 34;
    // int* address = &num; // & address of operator
    // // address is a pointer variable which contain address odf num variable

    // cout << &num << endl; // printing of address of num by address of (&) operator
    // cout << address << endl; // printing of pointer name address which contain address of num's state
    // cout << *address << endl; // printing value of pointer name address. by using "*"

    // int phone = 62;
    // int* p = &phone;

    // cout << ""<< phone << endl;
    // cout << ""<< &phone << endl;
    // cout << ""<< p << endl;
    // cout << ""<< *p << endl;


//  pointer_to_pointer

 int a = 69;
 int* b = & a;
 int** c = & b;

 cout <<"a " << a << endl;
 cout <<"b " << b << endl;
 cout <<"c " << c << endl;

 cout <<"   " << endl;

 cout <<"a " << &a << endl;
 cout <<"b " << &b << endl;
 cout <<"c " << **c << endl;

 cout <<"   " << endl;

 cout <<"a " << a << endl;
 cout <<"b " << *b << endl;
 cout <<"c " << **c << endl;




    return 0;
}