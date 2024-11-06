//Sales Tax

#include <iostream>
using namespace std;

int main() {
   int purchase=95;
   double const STATE_TAX=0.04, COUNTRY_TAX=0.02;
   
   double totalsalestax = purchase * STATE_TAX * COUNTRY_TAX;
   
   cout<<"Total sales tax on given purchase is $"<<totalsalestax<<"\n";
   
}