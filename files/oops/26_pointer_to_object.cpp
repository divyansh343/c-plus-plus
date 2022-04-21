// dynamically creating objects using new keyword
//{classname}} object1 = new {{classname}}; it will create a oject which is assigned dynamically into the memory
// then use pointer to obect to (->) to points toward member function of the class 
// ptr->getup();
#include <iostream>
using namespace std;

class pc{
    public:int ram,fans;
    void setup(int ra,int fa){
        ram =ra, fans = fa;
    }
    void getup(void){

cout <<" rams = "   << ram << " fans = " << fans << endl;
  }
};

int main () {
    pc lego;
    pc *ego = &lego;
    lego.setup(44,66);
    lego.getup();
    
    (*ego).setup(56,89); // calling class methods via an object pointer
    (*ego).getup();


    pc *ptr = new pc; // dynamically create object with new keyword
    ptr->setup(456,789);
    delete ptr; // deleted the object ptr which is assigned dynamically
    ptr->getup(); // using pointer to object to call member functions


    pc *lg = new pc; // dynamically create object with new keyword
    // lg->setup(69,100);
    // lg->getup(); 

    (*lg).setup(667,788);
    (*lg).getup();

    pc *macs = new pc[3]; // dynamically create arrays of object with new keyword
    macs[0].setup(78,90);
    delete[] macs; // delets macs array memory and free it for others to use 
    macs[0].getup();

    return 0;
}