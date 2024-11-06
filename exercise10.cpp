//Distance per Tank of Gas

#include <iostream>
using namespace std;

int main() {
  double gallons=20, average_miles1=23.5, average_miles2=28.9;
  double distance_intown, distance_onhighway;
  
  //calculate the distance in town and on highway
  distance_intown= gallons*average_miles1;
  distance_onhighway=gallons*average_miles2;
  
  //display the result in output
  cout<<"The distance the car can travel in town is "<<distance_intown<<" miles\n";
  cout<<"The distance the car can travel on highway is "<<distance_onhighway<<" miles\n";
   
}