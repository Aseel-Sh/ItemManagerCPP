#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {

ItemToPurchase item1;
ItemToPurchase item2;
string name;
int price;
int quantity;

cout <<"Item 1\nEnter the item name:\n" ;
getline(cin, name);
item1.SetName(name);


cout <<"Enter the item price:\n" ;
cin >> price;
item1.SetPrice(price);


cout <<"Enter the item quantity:\n" ;
cin >> quantity;
item1.SetQuantity(quantity);

cin.ignore();

cout <<"\nItem 2\nEnter the item name:\n" ;
getline(cin, name);
item2.SetName(name);



cout <<"Enter the item price:\n" ;
cin >> price;
item2.SetPrice(price);


cout <<"Enter the item quantity:\n" ;
cin >> quantity;
item2.SetQuantity(quantity);


int item1total = item1.GetQuantity() * item1.GetPrice() ;
int item2total = item2.GetQuantity() * item2.GetPrice();

cout <<"\nTOTAL COST"<<endl;
cout << item1.GetName() <<" " << item1.GetQuantity()<< " @ $"<< item1.GetPrice() <<" = $" <<item1total<<endl;
cout << item2.GetName() <<" " << item2.GetQuantity()<< " @ $"<< item2.GetPrice() <<" = $" <<item2total<<"\n\n";
cout << "Total: $" << item1total + item2total<<endl;
   return 0;
}

