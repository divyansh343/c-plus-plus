#include <iostream>
using namespace std;

int main()
{

    // odd even check
    // int num;
    // cout << "enter a noumber" << endl;
    // cin >> num;
    // if(num % 2 == 0){
    //     cout << "it is an even noumber" << endl;
    // } else
    // {
    //     cout << "it is an odd noumber" << endl;
    // }

    // making cofee
    // string cup, name;
    // int size;
    // cout << "what's your name sir" << endl;
    // cin >> name;
    // cout << "what do you want Tea/Coffee" << endl;
    // cin >> cup;
    // if (cup == "coffee")
    // {
    //     cout << "what size coffee do you want" << endl;
    //     cin >> size;
    //     cout << "Sir, your " << size << " ml COffee is ready " << endl;
    // }
    // else if (cup == "lemonade")
    // {
    //     cout << "Kya size chaie lawde" << endl;
    //     cin >> size;
    //     cout << "gandu gaand mai bharle ye  " << size << " ml ki bottle" << endl;
    // }
    // else
    // {
    //     cout << "what size TEa do you want" << endl;
    //     cin >> size;
    //     cout << "Sir, your " << size << " ml Tea is ready " << endl;
    // }
    // if (cup == "lemonade")
    // {
    //     cout << "lawdwe aa mat jana kahi " << name << endl;
    // }
    // else
    // {
    //     cout << "come again " << name << endl;
    // }


// if else report card program

    int num;
    string name;
    cout << "enter your name" << endl;
    cin >> name;
    cout << "enter your number" << endl;
    cin >> num;
    if (num < 0 && num > 100)
    {
        cout << "abe lawde ache se daal" << endl ;
    }
    else if (num >= 0 && num < 33)
    {
        cout << "you are fail my boy" << endl;
    }
    else if (num >=33 && num < 50)
    {
        cout << "D le le" << endl;
    }
    else if (num >=50 && num < 60)
    {
        cout << "c le le" << endl;
    }
    else if (num >=60 && num < 70)
    {
        cout << "b le le" << endl;
    }
    else if (num >=70 && num < 80)
    {
        cout << "A le le" << endl;
    }
    else if (num >=80 && num < 90)
    {
        cout << "A++ le le" << endl;
    }
    else if (num >=90 && num <= 99)
    {
        cout << "muh me le le" << endl;
    }
    else if (num == 100)
    {
        cout << "ek russian milegi aapko " << name <<" my boy" << endl;
    }

    return 0;
}