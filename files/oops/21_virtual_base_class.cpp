// in this we made four classes
// student -----> practical  -----> result  
//            -----> test    ----->

// in result there are two refrences of same data members of class student because of her two base classes test and practical which is derived from class student.

// so when we derive test and practical classes from class student we declare that we will not share double if there one of the base class is one of my sibling which is derived from class student.

// we use virtual base classes for the solutions of these ambiguties

// class test : virtual public student{
// class practical: virtual public student{

    // we add virtual keyword during inheriting from class student.
    
#include <iostream>
using namespace std;
class student{
    protected : 
    string name;
    int rollno;
    public :
    void setStudent(string na, int rn){
        name = na;
        rollno = rn;
    }
    void showStudent(void){
        cout << "roll no and name is " << rollno << " " << name << endl; 
    }
};
class test : virtual public student{
    protected : 
    int maths, physics;
    public :
    void setTest(int ma, int ph){
        maths =ma, physics = ph;
    }
    void showTest(void){
        cout << "test result are maths : "<< maths << "physics : " << physics << endl; 
    }
};
class practical: virtual public student{
    protected : 
    int score;
    public :
    void setPractical(int s){
        score =s;
    }
    void showPractical(void){
        cout << "practical scores are "<< score<< endl; 
    }
};

class result: public test, public practical{
    public :
    void showResult(void){
        cout << " result of " << name << endl
        << "maths :" << maths << endl
        << "physics :" << physics << endl
        << "score :" << score << endl;
        showStudent();
        showPractical();
























































        showTest();
    }
};
int main () {
    result rakesh;
    rakesh.setStudent("rakesh",2234);
    rakesh.setTest(56,78);
    rakesh.setPractical(80);
    rakesh.showResult();
    return 0;
}