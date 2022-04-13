#include <iostream>
using namespace std;


int swapValuebyPointer(int*a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x= 55, y = 909;
    swapValuebyPointer(&x, &y);


    cout << "x==" << x <<endl;
    cout << "y==" << y <<endl;
    return 0;
}

