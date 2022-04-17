#include <iostream>
using namespace std;

class pen
{
private:
    int point, price;
    string name, colour;

public:
    static void totalpens(void); // static function member of class!
    static int count;            // static variables of class it's same for every object made with class
    void createpen(string, string, int);
    void showPen(void);
};
int pen ::count = 458; // defining static variable outside class scope.
void pen ::createpen(string na, string col, int pr)
{
    name = na, colour = col, price = pr;
    count++;
    cout << "your pen " << name << " added sucessfully!" << endl;
}
void pen ::showPen(void)
{
    cout << "details " << name << " " << colour << " " << price << endl;
    totalpens();
};
void pen ::totalpens()
{
    cout << "total pen count is : " << count << endl;
}
int main()
{
    pen two_rupee_wala;
    two_rupee_wala.createpen("two_rupee", "niche_blue", 2);
    two_rupee_wala.showPen();
    pen ::totalpens();
    pen reynolds;
    pen hoover;
    pen mavie;
    reynolds.createpen("jetter", "black", 10);
    pen ::totalpens();
    hoover.createpen("peter", "red", 45);
    pen ::totalpens();
    mavie.createpen("glitter", "blue", 30);
    pen ::totalpens(); // call without making any object.
    return 0;
}