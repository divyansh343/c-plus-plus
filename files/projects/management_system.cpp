// slut management system(SMS) porly written in C++
// don't use for college projects.
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void print(string);

class slut
{
public:
    int id, rate, age, pot=0, energy=1000;
    string name, client;
    void addSlut(string, int, int);
    void getSlut();
    void removeSlut(int);
    void changeName(string, int);
    void fuck(string,int);
    void getRate();
    void money();
};
void slut ::addSlut(string n,int a, int r)
{
    name = n;
    rate = r;
    id = sizeof(n) * r + 343 - 69;
    age = a;

    cout << "slut created suceesfully" <<endl;
    cout << id << " "<< name << " " << rate <<endl;
}
void slut ::removeSlut(int i)
{
    if (i == id)
    {
        id = 0;
        name = "removed";
        rate = 00;
        cout << "slut removed sucessfully" << endl;
    }
    else
    {
        cout << "you have enterd wrong credentials" << endl;
    }
}
void slut :: changeName(string n, int i)
{
    if (i == id)
    {
        name = n;
        cout << "name change sucessfull to " << name << endl;
    }
    else
    {
        cout << "you have enterd wrong credentials" << endl;
    }
}
void slut ::fuck(string c, int m = 600)
{
    client  = c;

    pot = pot + m;

    if (c=="hulk"){
    energy = energy - 180;
    print("my god you got hulk today");
    }else
    {
    energy = energy - 30;
    }
    

    cout << "yay baby! you got it" << endl;;
}
void slut :: getRate() 
{
cout << "rate of " << name << " is " << rate << endl;
}
void slut ::getSlut()
{
    cout << setw(11) << "detais" <<endl;
    cout << id << " "<< name << " " << rate <<endl;
    cout <<"last client " << client <<endl;
    cout <<"money " << pot <<endl;

}
void slut :: money()
{
    cout << name << ", your total amount is " << pot << endl; 
}

int main()
{
    slut lisa;
    slut mia;
    lisa.addSlut("lisa hayden", 21, 800);
    mia.addSlut("mia khalifa", 34, 450);
    lisa.changeName("carol",19474);
    lisa.fuck("kevin hart",1000);
    lisa.fuck("loki",600);
    mia.fuck("hulk",1500);
    mia.fuck("hulk buster",3500);
    mia.getSlut();
    lisa.getSlut();
    cout << mia.energy << endl;
    mia.money();
    lisa.money();

    system("pause");
    return 0;
}
void print (string val){
    cout << setw(12) <<val << endl;
}