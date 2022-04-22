#include <iostream>
using namespace std;
class school {
    protected :
    string title;
    public:
    virtual void study(){
        cout << "padhai karo school mai" << endl;
    }
};
class practical : public school {
    protected :
    string marks;
    public:
    void study(){
        cout << "padhai karo practical ki school mai" << endl;
    }
};
class exam : public school {
    protected :
    int year;
    public:
    void study(){
        cout << "padhai karo exam ki school mai" << endl;
    }
};

int main () {
    practical madam;
    exam hot_mam;

    school * test[2]; // making two pointer of base class
    test[0] = & madam; // allocating each pointer to the derived classes
    test[1] = & hot_mam;

    test[0]->study();
    test[1]->study();// calling seprate study memebers of their own 

    return 0;
}