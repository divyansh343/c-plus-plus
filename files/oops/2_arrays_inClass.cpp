#include <iostream>
#include <cstdlib>
using namespace std;

class shop
{
    int count, id;
    string products[100];
    int price[100];

    // void show(string,int);

public:
    void init(void) { count = 0; };
    void setProduct(string, int);
    void display(void);
};

// void shop :: show (string n,int i){
//     cout << n << " product svaed with the " << id << endl;
// }

void shop ::setProduct(string n, int p)
{
    products[count] = n;
    price[count] = p;
    id = count + 131;
    cout << " product svaed with the "<< products[count] << " and " << id << endl;
    count++;
    // show(products[count],id);
}
void shop ::display(void)
{
    for (int i = 0; i < count; i++)
    {
        cout << "the price of " << products[i] << " is => " << price[i] << endl;
    }
}

int main()
{
    shop paanmandir;
    shop makaan;
    paanmandir.init();
    paanmandir.setProduct("condm", 12);
    paanmandir.setProduct("sxdoll", 4899);
    paanmandir.setProduct("vbrator", 1090);
    paanmandir.setProduct("dldo", 530);
    paanmandir.display();
makaan.init();
    makaan.setProduct("kratika",800);
    makaan.setProduct("nandini",600);
    makaan.display();

    system("pause");

    return 0;
}