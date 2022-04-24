#include <iostream>
#include <fstream>
using namespace std;

int main () {
// ifstream abp;
// abp.open('boilerpalte.cpp');
string acc = "inshah akllaj";
ofstream out;
out.open("test.txt");
out << acc;
out << "is jismo hahan mai";
out << "rehna hai hamko";
out << "inshah allah";
    return 0;
}