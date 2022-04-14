#include <iostream>
using namespace std;

class fan{
    private : int power;
    public : int speed;
 
    void setSpeed(int);
    void setPower(int);
    void owner(string name){
        cout << "owner of this fan is " << name << endl;
    }

};

void fan :: setSpeed(int speed){
    static int next_speed = speed++;
    cout << "fan speed is set to " << next_speed << endl;
} 

void fan :: setPower(int power){
    int next_speed = power - 25;
    cout << "fan speed set to " << next_speed << endl;
}

int main(){
    fan bajaj; // instantation of class fan

    bajaj.owner("anshul"); 

    return 0;
}