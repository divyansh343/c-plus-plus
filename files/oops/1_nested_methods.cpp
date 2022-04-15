#include <iostream>
#include <cstdlib> // to stop program to autoclose
#include <iomanip>
using namespace std;
void print(string);

class slut
{
    private: // it can only use by class methods
    void money();

public:
    int id, rate, age, pot=0, energy=1000;
    string name, client;
    void addSlut(string, int, int);
    void getSlut();
    void removeSlut(int);
    void changeName(string, int);
    void fuck(string,int);
    void getRate();
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
    money();
    cout << setw(11) << "detais" <<endl;
    cout << id << " "<< name << " " << rate <<endl;
    cout <<"last client " << client <<endl;

}
void slut :: money()
{
    cout << name << ", your total amount is " << pot << endl; 
}

int main()
{
    

    system("pause");
    return 0;
}
void print (string val){
    cout << setw(12) <<val << endl;
}