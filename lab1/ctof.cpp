///ctof.cpp
//A program that converts the given value in Celsius to Fahrenheit
//Author: Berkay Ersengun
//Date: 01/10/2017


#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;
int main ()
{
  
  double c,f; //c=celsius, f= fahrenheit

  cout<<"Please enter a value in Celsius "<<endl ;
  cin>> c;
  cout<<"The given value in Celsius is "<<c<<endl;
  f=((c*9)/5)+32;
  cout<<"The given value in Fahrenheit is "<<fixed<<setprecision(2)<<f<<endl;
  
  

}


  

  
