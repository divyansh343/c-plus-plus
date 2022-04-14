#include <iostream>
using namespace std;

int main(){
    // int roll_no[3] = {67,76,45};
    // cout<< &roll_no <<endl;
    // cout<< &roll_no[1] <<endl;

    int nums[6];
    nums[0] = 589;
    nums[1] = 55;
    nums[2] = 54;
    nums[3] = 45;

    cout  << nums[0] << endl;
    int *p = nums; 
    cout  << *p << endl;
    cout  << *p+1 << endl;
    cout  << *p+2 << endl;
    cout  << *p+3 << endl;

    cout  << *p++ << endl;
    cout  << *p << endl;
    cout  << *++p << endl;
    cout  << *p << endl;



    string subjects[] = {"hindi","english","maths"};
    string *val = subjects;
    cout << *val << endl;
    cout << val << endl;
    // cout << *val << endl;
    // cout << *val<< endl;

    return 0;
}