#include <iostream>
using namespace std;

class dettol {
public:
    virtual void handwash()
    {
        cout << "running handwash of dettol" << endl;
    }
};

class lifeboy : public dettol {
public:
    void handwash()
    {
        cout << "running handwash of lifeboy" << endl;
    }
};

int main() {
    dettol * ninty_nine;
    dettol chalis_rupee;
    lifeboy ek_minute_tak;
    ninty_nine = & ek_minute_tak;

    ninty_nine->handwash();
    // it's a default behaviou if any pointer of a base class points towards the object of derived class, if you call a function of a same name which is exist in both derived and base class. it will give prefrence to base class function.

    // if you want to overide this default behaviour you have to use virtual keyword in base class function {virtual void handwash()}

    // it's runtime polymorphism compiler decides which functiont to bind decides on runtime
 
    return 0;
}