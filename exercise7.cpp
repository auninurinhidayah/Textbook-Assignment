//Ocean Levels

#include <iostream>
using namespace std;

int main() {
   double oceanLevel=1.5;//ocean level rising value per year
   
   double fiveyears= 5*oceanLevel;
   double sevenyears= 7*oceanLevel;
   double tenyears= 10*oceanLevel;
   
   //display the output
   cout<<"\nNumber of milimetres higher in 5 years is "<<fiveyears<<"mm\n";
   cout<<"Number of milimetres higher in 7 years is "<<sevenyears<<"mm\n";
   cout<<"Number of milimetres higher in 10 years is "<<tenyears<<"mm\n";
}