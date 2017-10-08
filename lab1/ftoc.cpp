///ftoc.cpp
//A program that converts the given value in Fahrenheit to Celsius
//Author: Berkay Ersengun
//Date: 01/10/2017


#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;
int main ()
{
  
  double c,f; //c=celsius, f= fahrenheit

  cout<<"Please enter a value in Fahrenheit "<<endl ;
  cin>>f;
  cout<<"The given value in Fahrenheit is "<<f<<endl;
  c = (f-32)*5/9 ; 
  cout<<"The given value in Celsius is "<<fixed<<setprecision(2)<<c<<endl;
  
  

}
