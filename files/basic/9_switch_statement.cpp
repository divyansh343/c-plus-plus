#include <iostream>
using namespace std;

int main(){
    // cout << "hello world" << endl;
    // switch statements
    int date;
    cout << "enter today's date" << endl;
    cin >> date;
    switch (date)
    {
    case (3):
        cout << "happy birthday my boy";
        break;
    case (4):
        cout << "happy tatti my boy";
        break;
    case (5):
        cout << "happy matti my boy";
        break;
    default:cout << "lawde kuch 3,4,5 daal" <<endl;
        break;
    }
    return 0;
}
