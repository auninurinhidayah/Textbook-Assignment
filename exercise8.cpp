//Total Purchase

#include <iostream>
using namespace std;

int main() {
   double item1=15.95,item2=24.95,item3=6.95,item4=12.95,item5=3.95;
   double const SALES_TAX=0.07;
   double subtotal;
   double totalPrice;
   double taxamount;
   
   //calculate the subtotal and the total including the taxamount
   subtotal= item1+item2+item3+item4+item5;
   taxamount= subtotal*SALES_TAX;
   totalPrice =subtotal + taxamount;
   
   //display the list of prices for each items
   cout<<"\nPrice of item 1 = $"<<item1<<"\n";
   cout<<"Price of item 2 = $"<<item2<<"\n";
   cout<<"Price of item 3 = $"<<item3<<"\n";
   cout<<"Price of item 4 = $"<<item4<<"\n";
   cout<<"Price of item 5 = $"<<item5<<"\n";

   //display the subtotal
   cout<<"\nSubtotal = $"<<subtotal<<"\n";
   //display the tax amount
   cout<<"Tax Amount = $"<<taxamount<<"\n";
   //display the total price the customer should pay
   cout<<"Total Price = $"<<totalPrice<<"\n";

}