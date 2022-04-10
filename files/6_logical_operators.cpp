#include <iostream>
using namespace std;

int c = 2222;

int main()
{
    int a, b, c;
    a = 34, b = 56, c = 56;

    cout << "heyy" << endl;
    cout << (c == b) << endl;
    cout << (a != b) << endl;

    cout << (a + b + c) << endl;

    cout << ::c << endl; // for pointing global variable

    cout << "the value of 66.6 " << sizeof(66.6) << endl; 
    cout << "the value of 66.6 f " << sizeof(66.6f) << endl; 
    cout << "the value of 66.6 l " << sizeof(66.6l) << endl; 
    cout << "sizeof string " << sizeof("hell") << endl; 


    // i am dangerous coder between 12 - 9 

    int ab = 40;
    int  & bb = ab;

    cout<< ab << endl;
    cout<< bb << endl;


    float abc = 56.78;

    cout << int(abc) << endl;  // type casting in cpp
    cout << abc << endl;  // type casting in cpp
    cout << int(abc) << endl;  // type casting in cpp


    return 0;
}