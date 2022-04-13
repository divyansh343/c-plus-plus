#include <iostream>
using namespace std;

struct chapri
{
    int id;
    string displayName;
    int age;
    float GDP;
};

int main()
{
    struct chapri nigga; // initialize chapri struct with nigga name

    nigga.id = 6999;
    nigga.displayName = "lil Nigga";
    nigga.age = 21;
    nigga.GDP = 2100.64;

    // cout << nigga << endl;
    cout << nigga.id << endl;
    cout << sizeof(nigga.displayName) << endl;
    cout <<"age "<< nigga.age+1 << endl;
    cout <<"age "<< nigga.age++ << endl;
    cout << sizeof(nigga.GDP) << endl;

    enum cars {ckoda, parrari, dicklauren};

    cars me = dicklauren;

    cout << "khgjkhfsjkhdf"<< me <<endl;
    return 0;
}