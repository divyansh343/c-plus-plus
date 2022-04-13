#include <iostream>
using namespace std;

int swapValuebyrefrence(int&a,int&b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    //refrence variables
    int x= 55, y = 909;
    swapValuebyrefrence(x,y);


    cout << "x==" << x <<endl;
    cout << "y==" << y <<endl;
    return 0;
}