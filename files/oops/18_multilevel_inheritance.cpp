//multilevel inheritance
// there are three diffrent classes
//robot, android, sexdroid
//sexdroid is derived from android which is derived from robot

#include <iostream>
using namespace std;

class robot
{
private:
public:
    string model;
    int walk, work, run;

    robot(){}
    robot(string mo, int wa, int wo, int ru){
        model = mo;
        walk = wa;
        work = wo;
        run = ru;
    }
    void displayrobo(void){
        cout << "model " << model << endl;
        cout << "walk " << walk << endl;
        cout << "work " << work << endl;
        cout << "run " << run << endl;
    }
};

class android :public robot
{
private:
public:
    string name;
    int talk, play;
    android(){};
    android(string na, int ta)
    {
        name = na;
        talk = ta;
    }
    void showAndroid(void)
    {
        cout << "name " << name << endl;
        cout << "talk " << talk << endl;
    };
};

class sexdroid : private android{
    public:
    string stagename;
    int sex,stamina;
    sexdroid(){}
    sexdroid(string stn,int se,int st){
        stagename = stn;
        sex = se;
        stamina = st;
        
    }
    sexdroid(string na,int ta){
        name = na;
        talk = ta;
    }
    sexdroid(string na,string mo,string stg){
        name = na;
        model = mo;
        stagename = stg;
    }
    void play(void){
        cout << "stagename " << stagename << endl;
        cout << "sex " << sex << endl;
        cout << "stamina " << stamina << endl;
        displayrobo();
        showAndroid();
        }
};

int main()
{
    sexdroid allen("allen keller","t790","allen killer");
    allen.play();
    return 0;
}