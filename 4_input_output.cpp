#include <iostream>
//it extends string and cin functanalities.
using namespace std;

int main(){
    // << insertion operator
    // >> extraction operator

    // cin is like cout but for the opposite feature
    
    int a,b;
    cout << "enter value of a" << endl;
    cin >> a ;
    cout << "enter value of b" << endl;
    cin >> b ;

    cout << "sum of a + b is " << a + b << endl;

    return 0;
}
