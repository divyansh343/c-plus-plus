#include <iostream>
using namespace std;

class country{
string name;
public:
void getname(void);
 country(void); // declaring constructor
                // it does not contain return type other member functions
                // it should be declar in public
};
void country :: getname(void){
    cout << "name = " << name << endl;
}
country:: country(void){ // defualt constructor that does not take argments as parameters
    name = "l undefined";
}

int main () {
    country persia;// constructor automatically invoked when you initailized an object.
    persia.getname();
    return 0;
}