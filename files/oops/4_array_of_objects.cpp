#include <iostream>
using namespace std;

class phone{
    int number;
    string owner;
    public :
    void call(int);
    void purchase(string,int);
};
void phone :: call(int n){
    cout << "calling ... " << n << endl; 
}
void phone :: purchase(string o,int n) {
    owner = o;
    number = n;
    cout << "purchase sucessfull" << endl;
} 
int main(){
    phone office[10];// we can declare array of objects with the class templates
    
    office[1].call(62);
    office[1].purchase("rakesh",4545);
    office[2].call(62);
    office[3].call(62);
    office[4].call(62);
    return 0;
}