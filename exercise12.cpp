//Stadium Seating

#include <iostream>
#include<iomanip>
using namespace std;

int main() {
   double classA=15, classB=12, classC=9;
   double numA, numB, numC;
   double totalPrice;
   
   //ask user to enter the number of tickets for class A,B and C
   cout<<"Please enter the number of tickets below: "<<"\n";
   cout<<"Class A: ";
   cin>>numA;
   cout<<"Class B: ";
   cin>> numB;
   cout<<"Class C: ";
   cin>> numC;
   
   //calculate the total price
   totalPrice=(numA*15)+(numB*12)+(numC*9);

   //display the amount of income generated with two decimals place of precision
   cout<<fixed<<setprecision(2);
   cout<<"\nThe total income generated : $"<<totalPrice<<"\n";
}