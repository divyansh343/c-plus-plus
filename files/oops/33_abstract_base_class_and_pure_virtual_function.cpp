// pure virtual function is used when you have to make a abstract base class
// abstract base class is created for the purpose of derive classes sothey can use their features independently

// how to make a virtual function pure

#include <iostream>
using namespace std;

class coremodel{ // it's an abstract base class because it contains a pure virtual function 
    protected :
    public :
    int idx =22;
    virtual void feature(void)=0; // if you make a pure virtual function by doing =0;, then you have to make seprate member functions in derived classs it's must. 
    // if individual member functions is not availble in derive classes it will not run

    // if you define a pure virtual member function then this class is treated as -- Abstract base class

};
class xiomi : virtual public coremodel{
    protected :
    int xdx;
    void feature(){
        cout << "featurs of xiomi edge technology" << endl;
    }

};
class redmi : virtual public coremodel{
    protected :
    int rdx;
    void feature(){
        cout << "featurs of new redmi" << endl;
    }

};

class chaman : public xiomi, public redmi {
public :

void feature(){

    cout << "diwlai" << endl;
    cout << idx << endl;

};
};
int main () {
    coremodel * phone[3];
    xiomi aqua_pro;
    redmi gorilla_x;
    phone[0] = & aqua_pro;
    phone[1] = & gorilla_x;

    phone[0]->feature();
    phone[1]->feature();

    chaman micromax;

    phone[3] = & micromax;
    phone[3]->feature();

    


    
    return 0;
}