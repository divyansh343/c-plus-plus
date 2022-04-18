// a derived class only access public members of base class taht it can store in public or private by giving visiblity mode.
// derived class never inherits private members no means no
// we can inherit private member by using public memebers of the same class then derive these methods into derived class
// protected is not accesible directly
#include <iostream>
using namespace std;

class cricketer {
    string name;
public:
string battingStyle;
int high_score;
int jersey;
    cricketer(string,int,int);
    cricketer(){
        battingStyle = "middle";
    jersey = 69;
    high_score = 264;
    };
    void setname(string na){
        name = na;
    }
    void getname(string na){
         cout << "name " << name << endl;
    }
    void playerdetails(void);
};
void cricketer :: playerdetails(void){
    cout << "------------------------------" << endl;
    cout << "name ---> " << name << endl;
    cout << "batting style ---> " << battingStyle << endl;
    cout << "high score  --->" << high_score << endl;
    cout << "jersey no.  ---> "<< jersey << endl;
}
cricketer :: cricketer (string bts, int jer, int hs){
    battingStyle = bts;
    jersey = jer;
    high_score = hs;
}

// class student inherits features of class cricketer // a student can also have propertys of a cricketer
class student : private cricketer { 
    private :
    int rollno;
    public:
    student(){
        rollno = 0;
    }
    student(string bts,int jer){
        battingStyle = bts;
        jersey = jer;
    }
    void about(void){
        playerdetails();
    }
    void setn(string na){
        setname(na);
    }
};
int main () {
    cricketer rohit;
    rohit.playerdetails();
    cricketer dhoni("right",7,183);
    dhoni.playerdetails();

    student hardick;
    hardick.about();
    //player details is a member func of class cricketer but student have acces of it because it is inherited or drived from class cricketer. 
    student kumar("orthodox", 67);
    kumar.about();
    kumar.setn("kumar bhuvneshwar"); 
    // here i can access private members of base class by using public members of the base class
    kumar.about();


    return 0;
}