//Test Average

#include <iostream>
#include<iomanip>//set precision fixed
using namespace std;

int main() {
   double sum, average;
   double test1, test2, test3, test4, test5;
   
   //prompt user to enter the scores for the five tests
   //test1
   cout<<"Enter score for test 1: ";
   cin>>test1;
   
   //test2
   cout<<"\nEnter the score for test 2: ";
   cin>>test2;
   
   //test3
   cout<<"\nEnter the score for test 3: ";
   cin>>test3;

   //test4
   cout<<"\nEnter the score for test 4: ";
   cin>>test4;
   
   //test5
   cout<<"\nEnter the score for test 5: ";
   cin>>test5;
   
   //sum of the five tests and the average
   sum=test1+test2+test3+test4+test5;
   average = sum/5;
   
   //display the results
   cout<<fixed<<setprecision(1);//set precision to one decimal point
   cout<<"\nSum of the five test: "<<sum<<"\n";
   cout<<"Average of the five tests: "<<average<<"\n";
}