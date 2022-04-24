// new keyboard is used to dynamically create variable or allocate memory
// delete is used to delete dynamically delete memory
// new & delete are both ketword and operator
#include <iostream>
using namespace std;
int main () {
    int a = 45;
    int *p = &a;
    delete p; // it only works with dynamically created data
    cout << "a = "<< a << endl;  
    cout << "p = "<< *p << endl;  
    cout << "&a = "<< &a << endl;  

    int *gun = new int(456);
    delete gun; // deletes memory 
    cout << "gun = "<< *gun << endl;

    int *arr = new int[4];
    arr[0] = 24333;
    arr[1]  = 2543;
    arr[2] = 24983;
    arr[3] = 26;
// delete

delete[] arr;
// dynamically create memory is cleared
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}