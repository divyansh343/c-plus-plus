#include <iostream>
#include <iomanip>
using namespace std;
const int point = 5655656;
int main(){
    // const int point = 45;

    // constant variable 
    int const point = 45;
    cout <<::point << endl;

    // manipulators

    //
    cout << setw(20) <<point << endl;
    //
    //

    return 0;
}