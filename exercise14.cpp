//Average Rainfall

#include <iostream>
#include<iomanip>//set precision fixed
using namespace std;

int main() {
   string month1, month2, month3;
   double amountrain1, amountrain2, amountrain3, averagerainfall, totalrainfall;
   
   //ask user to enter the name for each three months and the amount of rain
   cout<<"Month 1: ";
   cin>>month1;
   cout<<"Amount of rain (in inches): ";
   cin>>amountrain1;
   cout<<"Month 2: ";
   cin>>month2; 
   cout<<"Amount of rain (in inches): ";
   cin>>amountrain2;
   cout<<"Month 3: ";
   cin>>month3;
   cout<<"Amount of rain (in inches): ";
   cin>>amountrain3;
   
   
   //calculate the total rainfall for the three months to calculate the average
   totalrainfall=amountrain1+amountrain2+amountrain3;
   averagerainfall=totalrainfall/3;
   
   //display the message
   cout<<fixed<<setprecision(2);
   cout<<"\nThe average rainfall for "<<month1<<", "<<month2<<" and "<<month3<<" is "<<averagerainfall<<" inches\n";
}