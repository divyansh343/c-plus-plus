#include <iostream>
using namespace std;

int swapValuebyrefrence(int&a,int&b){
    int temp = a;
    a = b;
    b = temp;
}

//function inititalization
void newValuebyrefrence(int&a,int&b){
    a = 76786767;
    b = 54653546;
}

int main(){
    //refrence variables
    // int x= 55, y = 909;
    // swapValuebyrefrence(x,y);


    // cout << "x== " << x <<endl;
    // cout << "y== " << y <<endl;

    //refrence variables
    int x= 55, y = 909;
    newValuebyrefrence(x,y);


    cout << "x==" << x <<endl;
    cout << "y==" << y <<endl;
    return 0;
}