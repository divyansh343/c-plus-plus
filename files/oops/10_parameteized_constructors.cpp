#include <iostream>
using namespace std;

class country{
string name;
int num;
public:
void getname(void);
 country(string,int); // declaring constructor
                // it does not contain return type other member functions
                // it should be declar in public
};
void country :: getname(void){
    cout << "name = " << name << endl;
    cout << "number = " << num << endl;
}
country:: country(string na, int n){ // parameterized constructors take argments as parameters.
    name = na;
    num = n;
}

class point{
    int x,y;
public:
void getinfo(void);
void distance(point,point);
point(int, int);
};

void point :: distance( point , point){

};

void point :: getinfo(void){
cout << "point are (" << x << "," << y << ")" << endl; 
}

point :: point(int a, int b){
x=a; y=b;
}

int main () {
    // // implicit declartion
    // country bangladesh("banglidesh",691);
    // bangladesh.getname();
    // // explicit declartion of object with constructors
    // country india = country("hinduatani bhau",911);
    // india.getname();

    point car(2,4);
    car.getinfo();
    point bicycle(6,9);
    bicycle.getinfo();

    return 0;
}