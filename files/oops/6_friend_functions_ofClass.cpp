#include <iostream>
using namespace std;

class fan
{
private:
    int speed;
    friend fan ruuny(fan, fan); // important to declare as a friend.
    // friend function have access of objects defined by the class
    // it can modify object data but cannot create new objects
    // usually used to take obects as arguments
public:
    string name;
    void create(string n, int s)
    {
        name = n;
        speed = s;
        cout << "name : " << name << " speed " << speed << endl;
    }
};

fan ruuny(fan f1, fan f2) // majdoor type naam bhi likhna padta hai hath mai declare karte waqt.
{
    f1.name = f1.name + " by ruuny";
    f2.name = f2.name + " by ruuny";
    cout << f1.name << " and " << f2.name << endl;
}
int main()
{
    fan bajaj, lloyd;
    bajaj.create("ghoda", 4500);
    lloyd.name = "phoda";
    cout << "lloyd name :" << lloyd.name << endl;

    ruuny(bajaj, lloyd);// calling a friend function

    return 0;
}