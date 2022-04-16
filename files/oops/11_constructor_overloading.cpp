#include <iostream>
using namespace std;

class airpods{
    int age;
    string name;
    public:
    airpods(string n, int a = 5){ //ONE CAN ALSO TAKE DEFAULT VALUES AS ARGUMENTS
        name = n;
        age = a;
        cout << name << " and " << age << endl; 
    }
    // airpods(string n){
    //     name = n;
    //     cout << "only "<< name << endl; 
    // }
    airpods(void){
        name="lawda ka name";
        cout << "no only initialization " << name << endl; 
    }

};

int main()
{
    airpods apple("apple",30);
    airpods chinamal("rivera");
    airpods samsung;

    return 0;
}