#include <iostream>
using namespace std;
int main ()
{
  char*week[]={"sun","mon","tue","wed","thu","fri","sat"};
  int year,days;
  cout<< "Enter year"; 
  cin>>year;
  days = 365*year + (year-1)/4 - (year-1)/100 + (year-1)/400 ;
  cout<<week[days%7]<<"\n";

  return 0;
}

