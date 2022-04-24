// in dynamic allocation of object. object are initaialized durin runtime, with the constructor which is requird. because it can not decide what is going to be the type of constuctor input, so it go with constructor which matches with the obect constructor arguments.

#include <iostream>
using namespace std;

class student
{
    int id =0 , age;
    string name, standard, gender, subject;
public:

    void about(void)
    {
        cout << "....................." << endl;
        cout << "name :" << name << endl;
        cout << "standard :" << standard << endl;
        cout << "gender :" << gender << endl;
        cout << "subject :" << subject << endl;
        cout << "id :" << id << endl;
        cout << "age :" << age << endl;
    }
    student(void){
        name = "n/a", standard = "n/a", subject = "n/a", age = 00;
    };
    student(string, string, float);
    student(float a){
        age = int(a);
    };
    student(string, string, string, int);
    student(string na, string stn)
    {
        name = na, standard = stn;
    };
};

student ::student(string na,  string sub, float am)
{
     name = na; 
     subject = sub; 
     age = int(am);
}
student ::student(string na, string stn, string sub, int a)
{
    name = na; 
    standard = stn;
     subject = sub; 
     age = a;
}

int main()
{
    student elsa("abhiskek", "high school");
    student jean("abhiskek", "lows chool", "sex education", 23);
    student divyansh;
    student margrot("margot robbie", "9th", "fax education",5.6);
    student valkyri(33.1);
    student alexendra;

    elsa.about();
    jean.about();
    divyansh.about();
    valkyri.about();
    margrot.about();
    alexendra.about();

    return 0;
}