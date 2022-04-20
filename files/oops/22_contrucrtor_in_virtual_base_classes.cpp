// in this program we are using a special syntax in derived class to call constuctor of there two classes and set thier values. it's an example of multiple inheritance

// constuctors are invoked in base class first.
// if there are more than one base classes it calls accoording to which is assigned early

// in the below case: firstly bas1 1 constructor call followed by base2 constructor and in last derived class constructor.
// (3)class derived : (1)public base1, (2)public base2
// {

// if there is virtual class her constructor called first it will not matter which assigned first. 

#include <iostream>
using namespace std;
class base1 {
public:
int data1;
base1(){}
    base1(int d1){
        data1 = d1;
        cout << "base1 constructor called" << endl;
}
};

class base2 {
public:
int data2;
base2(){}
    base2(int d2){
        data2 = d2;
        cout << "base2 constructor called" << endl;
    }
};

class derived : public base1, virtual public base2
{
public:int der1,der2;
    derived(int a, int b, int c, int d):base1(a), base2(2) {
        der1 = c;
        der2 = d;
        cout << "derived constructor called" << endl;
    }
};
int main () {
    derived aap(1,2,3,4);
    return 0;
}