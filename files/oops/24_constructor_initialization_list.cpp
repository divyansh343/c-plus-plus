#include <iostream>
using namespace std;

// there you can initialize values into variables directly fro your constructor.
 // like that -- biodata(string n, int rn):name(n),rollNo(rn){

class biodata{
    public:
    string name;
    int rollNo;
    biodata(){cout<<"cons A runs";};
    biodata(string,int);
};
biodata :: biodata(string n, int rn):name(n),rollNo(rn){
cout << "constuctor runs name: " << name << "roll_no : " << rollNo << endl;
}
int main () {
    biodata abhishek("aishwarya",48);
    return 0;
}