#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 11; i++)
    {
        if (i == 5)
        {
            // break; // break the for loop
            continue; // continue to iterate by ditching current iteration
        }
        cout << i;
    }

    return 0;
}