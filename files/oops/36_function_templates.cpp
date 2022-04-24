#include <iostream>
using namespace std;

template < class T = float, class T1 = float>
void change(T,T1);

int main () {
    change(4,6.9);
    change(4,7);

    
    return 0;
}

template < class T = float, class T1 = float>
void change(T a, T1 b){
cout << "answer is " << a * b << endl;
}
