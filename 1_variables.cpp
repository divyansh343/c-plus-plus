#include <iostream>
#include <string>

int main()
{
    using std::cout;
    using std::endl;

    // namespace includes string features in program
    using namespace std;

    cout << "jamstack" << endl;

    int myAge = 19;
    cout << myAge << endl;
    myAge = 20;
    cout << myAge << endl;

    // string variable

    string myName = "divyash";


    cout <<"Hello my name is "<< myName << " and my age is " << myAge << endl;

    return 0;
}