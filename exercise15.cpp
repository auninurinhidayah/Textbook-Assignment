//Male and Female Percentage

#include <iostream>
using namespace std;

int main() {
   double male, female, totalstudents;
   double percentagemale, percentagefemale;
   
   //prompt user to enter the total students, males and females
   cout<<"Total students: ";
   cin>>totalstudents;
   
   cout<<"Number of male students: ";
   cin>>male;
   
   cout<<"Number of female students: ";
   cin>>female;
   
   //calculate the percentage for male and female students
   percentagemale=male/totalstudents;
   percentagefemale=female/totalstudents;

   //display the outputs
   cout<<"\nPercentage of male students: "<<percentagemale<<" percent\n";
   cout<<"Percentage of female students: "<<percentagefemale<<" percent\n";
}