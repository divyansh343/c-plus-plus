// two classes maths and hindi
// a member function of class hindi get access of class maths private data
// 1. have to declare that function as friend in the another calss 

#include <iostream>
using namespace std;
class maths; // forward initialization of class because it point towars data which is not executed.

class hindi{
public:
    void alltopics(maths,maths);
    string topic;
    int pgno;
};

class maths{
    friend void hindi :: alltopics (maths,maths); // 1 friend initialization 
public:
    string topic;
    int pgno;
};

void hindi :: alltopics(maths a ,maths b){
    a.topic = a.topic + " something something";
    b.topic = a.topic + " nothing but something something";
    cout << a.topic << " and " << b.topic << endl;
}

int main()
{
    maths decimal,hexagon;
    decimal.topic = "fun with noumbers";
    hexagon.topic = "fun with board and objects";
    cout << "decimal.topic = " << decimal.topic << " and hexagon.topic = " << hexagon.topic << endl ;  

    hindi rahasya;
    rahasya.topic = "ek thi dayan";
    cout << "rahasya topic added " << rahasya.topic << endl;

    rahasya.alltopics(decimal,hexagon);

    return 0;
}