#include <iostream>
using namespace std;
class product{
   int id =1000;
   int price;
   public:
   void setProduct(){
       cout << "enter id of the product"<< endl;
       cin >> id;
       cout << "enter price of the product"<< endl;
       cin >> price;
   }
   void getProduct(void){
       cout << "id = " << id << " " << "price = " << price << endl;
   }
};
int main () {
    // product *phone = new product;
    // phone->setProduct(10001,890);
    // phone->getProduct();
int size = 4;
    product *list = new product[size];
    product *listAddres = list; // this create a pointer which is pointing the first object in the list array 
    for (int i = 0; i < size; i++)
    {
        list->setProduct();
        list++;
    }
    for (int i = 0; i < size; i++)
    {
        list->setProduct();
        list++;
    }
    for (int i = 0; i < size; i++)
    {
        listAddres->getProduct();
        listAddres++;
    }
    
    return 0;
}