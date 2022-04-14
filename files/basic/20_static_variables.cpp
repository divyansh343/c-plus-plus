#include <iostream>
using namespace std;

inline int mult(int a, int b)
{
    return a * b;
}

int svar(int a, int b)
{
    static int c = 1;
    c++;
    // static variables retain it's updated value from the older calls.
    // inside function.0
    return a * b + c;
}

int totalMoney (int money, float rate = 1.2){ // rate is an 
    static float erate = rate;
    erate = erate + 0.2;
    return money*erate;
}
int main()
{
    // cout << mult(4, 2);
    cout << svar(2,3) << endl;

    cout << "total money "<< totalMoney(300) << endl;
    cout << "total money "<< totalMoney(300) << endl;
    cout << "total money "<< totalMoney(300) << endl;
    cout << "total money "<< totalMoney(300) << endl;
    cout << "total money "<< totalMoney(300) << endl;
    cout << "total money "<< totalMoney(300) << endl;
    cout << "total money "<< totalMoney(300) << endl;
    cout << "total money "<< totalMoney(300) << endl;
    cout << "total money "<< totalMoney(300) << endl;
    cout << "total money "<< totalMoney(300) << endl;
    cout << "total money "<< totalMoney(300) << endl;
    cout << "total money "<< totalMoney(300) << endl;
    cout << "total money "<< totalMoney(300) << endl;
    cout << "total money "<< totalMoney(300) << endl;
    cout << "total money "<< totalMoney(300) << endl;

    return 0;
}
