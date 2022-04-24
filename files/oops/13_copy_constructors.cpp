#include <iostream>
using namespace std;
class pen
{
    string name;

public:
    void display(); 
    pen(void){
        name = "not";
    };
    pen(string n)
    {
        name = n;
    }
};
    void pen :: display(){
         cout << "name : " << name << endl; }

int main()
{
    pen two;
    two.display();

    pen four("more four");
    pen three  = two; // they are using compilers default copy constructors
    pen five(four);// they are using compilers default copy constructors
    three.display();
    four.display();
    five.display();

    return 0;
}