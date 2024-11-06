//Restaurant Bill

#include <iostream>
using namespace std;

int main() {
   double const TAX=0.0675, TIP=0.20;
   double mealcharge=88.67;
   
   double taxamount= mealcharge*TAX;
   double tipamount= (mealcharge+taxamount)*TIP;
   double totalbill= mealcharge + taxamount + tipamount;
   
   cout<<"\nMeal cost : $"<<mealcharge<<"\n";
   cout<<"Tax amount : $"<<taxamount<<"\n";
   cout<<"Tip amount : $"<<tipamount<<"\n";
   cout<<"\nTotal bills : $"<<totalbill<<"\n";
}