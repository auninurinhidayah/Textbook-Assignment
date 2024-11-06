//Miles Per Gallon

#include <iostream>
using namespace std;

int main() {
    double gallons, miles;
    double mileage;
    
    //prompt user to enter the number of gallons the car can hold
    cout<< "Enter the number of gallons the car can hold: ";
    cin>>gallons;
    //ask user to enter the miles it can be driven with full tank
    cout<<"Enter the number of miles can be driven: ";
    cin>>miles;
    
    //calculate the mileage
    mileage=miles/gallons;
    
    //display the mileage of the car
    cout<<"\nThe car's mileage is "<<mileage<<" miles per gallon\n";
}