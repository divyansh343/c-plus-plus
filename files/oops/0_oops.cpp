#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void print(string);
class fan
{
private:
    int power;

public:
    int speed;

    void setSpeed(int);
    void setPower(int);
    void owner(string name)
    {
        cout << "owner of this fan is " << name << endl;
    }
};

void fan ::setSpeed(int speed)
{
    static int next_speed = speed++;
    cout << "fan speed is set to " << next_speed << endl;
}

void fan ::setPower(int power)
{
    int next_speed = power - 25;
    cout << "fan speed set to " << next_speed << endl;
}

int main()
{
    fan bajaj; // instantation of class fan
    bajaj.owner("anshul");

    system("pause");
    return 0;
}

void print (string val){
    cout << setw(12) <<val << endl;

}