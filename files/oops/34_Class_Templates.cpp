#include <iostream>
using namespace std;

template <class T>
class die{
    T age;
    string name;
    void diein(){
        T dadi = age + 90   - age *2   ;
        cout <<name << " probably you will die after " << dadi << " years."<< endl;
    }
    public :
    die(string name, T age){
        this->age = age;
        this->name = name;
        diein();
    }
};

int main () {
    die <int>modiji("modiji",64);
    die <float>putin("putin",62.90909);
    return 0;
}




