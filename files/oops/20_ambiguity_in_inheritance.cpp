// both base classes have smae name of member functions. to solve this we call the preferred function of the dpecific class inside the derived calss.

// if both base class and derived class have same name of member functions, it will give the preferance of drive class memeber
#include <iostream>
using namespace std;
class godfather {
    protected :
    string ffamily;
    public:
    godfather(){}
    godfather(string f){
        ffamily = f ;
    }
    void getFamily(void){
        cout << "belongs to" << ffamily << endl;
    }
};
class grandmother {
    protected :
    string mfamily;
    int age;
    public:
    grandmother(){}
    grandmother(string f,int a){
        mfamily = f ;
        age = a ;
    }
    void getFamily(void){
        cout << "belongs to" << mfamily << endl;
    }
};

class result : public godfather, public grandmother {
    protected :
    public:
    string name;
    result(){
    }
    result(string n){
        name = n;
    }
    void setFamily(string ff,string mf){
        ffamily = ff , mfamily = mf;
    }
    void getFamily(void){
       godfather :: getFamily();   
    }
    void fullname(void){
     cout << name << " " << mfamily << endl;
    }
};

int main () {
    
result parker("peter");
parker.setFamily("evans","calrke");
parker.getFamily(); 
    return 0;
}