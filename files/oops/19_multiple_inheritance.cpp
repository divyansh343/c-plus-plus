// when a clas has two or more base classes
// is called multiple inheritance. 
// bond car has three base classes example of multiple inheritance.

#include <iostream>
using namespace std;

class boat {
public:
string swim;
boat(){}
boat(string sw){
    swim = sw;
}
};

class helicopter {
public:
string fly;
helicopter(){}
helicopter(string fl){
    fly = fl;
}

};

class tank {
public:
string fire;
tank(){}
tank(string fr){
    fire = fr;
}

};

class bondcar : public boat, public helicopter, public tank {
public:
string weapons;
bondcar(){}
bondcar(string we, string fr, string fl, string sw ){
    weapons = we;
    fire = fr;
    fly = fl;
    swim = sw;
}
void showoff(void);
};

void bondcar :: showoff(void){
    cout << "weapons " << weapons << endl;
    cout << "fire " << fire << endl;
    cout << "fly " << fly << endl;
    cout << "swim " << swim << endl;
}
int main () {
    bondcar gusetonMartin("grenade","yes fire", "sky high", "watch titanic esily");
    gusetonMartin.showoff();
    return 0;
}