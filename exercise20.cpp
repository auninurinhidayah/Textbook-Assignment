//Pizza Pi

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double diameter,radius, numslices, area;
  double const AREA_PER_SLICE=14.125;
  double const PI=3.14159;
  
  cout<<"Enter the diameter of the pizza (inches): ";
  cin>>diameter;
  
  radius= diameter/2;
  area= PI * pow(radius,2);
  numslices= area/AREA_PER_SLICE;
  
  cout<<"The number of slices that may be taken is "<<numslices<<" slices\n";
   
}