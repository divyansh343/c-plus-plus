#include <iostream>
using namespace std;

//fuction prototype
int sum(int,int);
void print(string);

int main()
{
    int one, two;
    cout << "enter one" << endl;
    cin >> one;
    cout << "enter two" << endl;
    cin >> two;
    cout << "answer " << sum(one,two) << endl;
    print("hello world");
    return 0;
}
//defining a function
int sum(int a,int b)
{
    return a + b;
}

void print (string stri){
cout<< stri << endl;
}