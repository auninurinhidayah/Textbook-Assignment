//How Many Calories?

#include <iostream>
using namespace std;

int main() {
   double const CALORIES_PER_SERVING = 300;
   double totalcookies, serving, caloriesconsumed;
   
   //user enter the total cookies consumed
   cout<<"Enter total cookies consumed: ";
   cin>>totalcookies;
   //calculate total calories
   serving=totalcookies/3; //1 serving equals to 3 cookies
   caloriesconsumed= serving*CALORIES_PER_SERVING;
   
   //display output
   cout<<"Calories consumed : "<<caloriesconsumed<<"\n";
   
}