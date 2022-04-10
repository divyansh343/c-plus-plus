#include <iostream>
#include <iomanip>
using namespace std;

// Advantages of C++ Array
// 1. Code Optimization (less code)
// 2. Random Access
// 3. Easy to traverse data
// 4. Easy to manipulate data
// 5. Easy to sort data etc.

//  Disadvantages of C++ Array
// 1. Fixed size
// 2. C++ Array Types

// There are 2 types of arrays in C++ programming:
// 1. Single Dimensional Array
// 2. Multidimensional Array

string host = "badepapa.com";

int main()
{
    // arrays are fixed
    int books[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << "book " << books[i] << endl;
    }

    string host = "bademummy.com";
        cout << host << endl;

    string players[11] = {
        "brian",
        "sachin",
        "rohit",
        "shikhar",
        "rishabh",
        "hardik",
        "chahal",
        "bumrah",
        "dhoni",
        "raina",
        "nitish",
    };

    // do
    // {
    //     for (int P = 0; P < 3; P++)
    //     {
    //         for (int i = 0; i < 11; i++)
    //         {
    //             cout << players[i] << endl;
    //         }
    //     }
    // } while (::host == "badepapa.com");

 cout <<"size of players " << players << endl;
    return 0;
}
