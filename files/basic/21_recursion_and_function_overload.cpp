//recursion in functions

#include <iostream>
using namespace std;
int subt(int,int=0);
int main () {
    cout << subt(6,3) << endl;
    // cout << subt(456) << endl;
    cout << subt(45) << endl;
    return 0;
}

int subt(int a,int b){
    return a-b;
}
