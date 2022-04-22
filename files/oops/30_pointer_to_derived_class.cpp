// if a pointer of base class points to the object of an derived class
// it can only access class members of base class
// it can not access derive class member
// assign of function take place in runtime
// runtime polymorphism
// it's called late binding
#include <iostream>
using namespace std;

class base{
    public:
    int val;
    base(){
        this->val = 34;
    }
    void play(){
        cout << "playing base ..."<< val << endl;
    };

};
class derived: public base {
    public:
    void play(){
        cout << "playing derived..."<< endl;
    };

};
int main () {

    base * wecool;
    base dabba;
    derived podes;

    wecool = & podes; // base 
    wecool->play(); // its calling play which is from base class. because pointer is of base class 

    derived * hao;
    derived haja;
    hao = & haja;
    hao->play(); // it's calling play of derived class. because the pointer is of derived class
    return 0;
}