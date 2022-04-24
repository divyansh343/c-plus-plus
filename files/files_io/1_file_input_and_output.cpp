#include <iostream>
#include <fstream>
using namespace std;

int main () {
    // writing in file

// ofstream op("boilerplate.cpp");
// string str  ="int he dark you can see the shiny";
// op << str;

    // reading file
    ifstream rea("test.txt");
    string radings;
    rea >> radings;

ofstream op("boilerplate.cpp");
op << radings;

    return 0;
}