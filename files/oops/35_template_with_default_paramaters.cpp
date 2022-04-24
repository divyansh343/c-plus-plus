#include <iostream>
using namespace std;
template <class T = float, class T1 = int>
class user{
    T salary;
    T1 years;
    void invest(void){
    T result = (salary / 100.0) * 20;
    double amount = result * 12 * years;
    cout << "you can invest " << result << " amount from your salary." << endl;
    cout << "if you invest for " << years << " years then your total worth will be "<< amount << endl;
}
    public:
    user(T salary, T1 years = 1){
        this->salary = salary;
        this->years = years;
        invest();
    }

};

int main () {
    user <>abhishek(30000);
    user <>varinder(15000,5);
    return 0;
}