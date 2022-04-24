#include <iostream>
using namespace std;
class animal{
    public:
    int an1;
    animal(){}
    animal(int an){
        an1 = an;
        cout << "animal constructor invoked"<< endl;

    }
};
class mammal:public animal{
    public:
    int ma;
    mammal(){}
    mammal(int m){
        ma = m;
        cout << "mammal constructor invoked"<< endl;
    }
};
class human :public mammal{
    public:
    int hu;
    human(){}
    human(int h){
        hu = h;
        cout << "human constructor invoked"<< endl;
    }
};

class chumans:public human{
    public:
    int chu;
    chumans(int a, int b, int c, int d){
        an1= a;
        ma= b;
        hu= c;
        chu = d;
        cout << "chumans constructor invoked"<< endl;
    }
};

int main () {
    chumans babu(1,2,3,4);
    return 0;
}