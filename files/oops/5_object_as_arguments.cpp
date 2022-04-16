#include <iostream>
using namespace std;

class dataset {
int a,b;
public : 
int operation(int,int);
int ops(dataset,dataset); // initalize is important to take object as argument

};
int dataset :: operation(int a1 , int b1){
    a = a1 , b= b1;
    cout << "a = " << a << " b = " << b << endl;
}
int dataset :: ops(dataset a11 , dataset b11){  // we are able to take objects as an argument. 
    dataset xe;
     xe.a = a11.a + b11.a ; // able access property of objects after taking it as argument. 
     xe.b = a11.b + b11.b ;
     cout << xe.a << " and " << xe.b << endl;
}
int main () {
    dataset acb,pcb, tot;
    acb.operation(300,500);
    pcb.operation(200,400);
    tot.ops(acb,pcb); // calling a method which is taking object as arguments.
    return 0;
}