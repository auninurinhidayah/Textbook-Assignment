//Currency

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double us_dollar;
   double const YEN_PER_DOLLAR=98.93;
   double const EUROS_PER_DOLLAR=0.74;
   double yen, euros;
   
   cout<<"Enter the amount (US dollar): $";
   cin>>us_dollar;
   
   yen=us_dollar*YEN_PER_DOLLAR;
   euros=us_dollar*EUROS_PER_DOLLAR;
   
   cout<<fixed<<setprecision(2);
   cout<<"\nExchange Dollar to Yen: "<<yen<<" Yen\n";
   cout<<"Exchange Dollar to Euros: "<<euros<<" Euros\n";
}  