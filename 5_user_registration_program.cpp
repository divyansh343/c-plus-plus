
#include <iostream>
using namespace std;

int main()
{
    string first_name, last_name, hairs, gender, education, die;
    int height, weight, age;
    bool is_sexy, is_blonde;

    cout << "enter your First Name" << endl;
    cin >> first_name;
    cout << "enter your Last Name" << endl;
    cin >> last_name;
    cout << "enter your age" << endl;
    cin >> age;
    cout << "what's your gender" << endl;
    cin >> gender;
    cout << "what's colour of your hairs" << endl;
    cin >> hairs;
    cout << "enter your height in cm" << endl;
    cin >> height;
    cout << "enter your weight in kg" << endl;
    cin >> weight;
    cout << "tell us about your education" << endl;
    cin >> education;

    string name = first_name + " " + last_name;

    cout << "User Registration Sucessfull" << endl ;
    cout << "name -- " + name << endl ;
    cout << "age -- " + age << endl ;
    cout << "gender -- " + gender << endl ;
    cout << "hairs -- " + hairs << endl ;
    cout << "height -- " + height << endl ;
    cout << "weight -- " + weight << endl ;
    cout << "education -- " + education << endl ;

    cout << ", Chill your details were sold in dark web" << endl ;
    cout << "Now Fuck OFF" << endl ;
    cout <<"Do you want to die " + first_name << endl;

    cin >> die;
    cout << "Do it now";

    return 0;
}