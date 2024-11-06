//Celsius to Fahrenheit

#include <iostream>
using namespace std;

int main() {
   double celcius,fahrenheit;
   
   cout<<"Enter the temperature (Celcius): ";
   cin>>celcius;
   
   fahrenheit=(9*celcius)/5+32;
   
   cout<<"Temperature in Fahrenheit: "<<fahrenheit<<" F\n";
}