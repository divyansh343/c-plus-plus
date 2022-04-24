// this pointer points towards the object which is responsible for the calling of the memeber function
// this is also used to return the object where it is called from
#include <iostream>
using namespace std;

class phone{
    public:
    int model;
    string name;

    // void create(string name, int model){
    //     this->name= name;
    //     this->model= model;
    // }
    phone & create(string name, int model){
        this->name= name;
        this->model= model;
        return *this; // this return the object which invoked this member function
    } 
    void get(void){
        cout << "name : " << name << " model : " << model << endl;
    } 
};
int main () {
    phone *xiomi = new phone;
    xiomi->create("china maal",69);

    phone *china = new phone();
    china->create("samsung",6900).get(); 
    
    return 0;
}