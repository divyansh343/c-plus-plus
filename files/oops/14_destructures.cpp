// destructor never take arguments and never return a value
// it runs at last that's why i selected name ass for this class. which is not appripirate for everyone.
#include <iostream>
#include <cstdlib>
using namespace std;
class ass
{
    int a;
public:
    ass(void){
        cout << "constructor" << endl;
    }
    ~ass(void){
        cout << "destructor" << endl; // this is an destructor function it runs after program ends
    }
};

int main()
{
    ass abc;
    ass bbc;
    {
        ass abcd; // destructor runs here because of the scope.
    }
    system("pause");
    return 0;
}