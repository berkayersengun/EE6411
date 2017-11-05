//ctoftable.cpp
//A program that calculates and shows a relation table between Celsius and Fahrenheit
//Author: Berkay Ersengun
//Date: 03/10/2017

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{

 float f,c; //f=fahrenheit,c=celsius

  cout<<setw(12)<<left<<"Fahrenheit ";
  cout<<setw(12)<<left<<"Celsius"<<endl;
  
  

  for (f=0;f<=300;f+=20)
    {
      c=(5.0/9.0)*(f-32);
      cout<<setw(12)<<left<<fixed<<setprecision(2)<<f;
     
      cout<<setw(12)<<left<<fixed<<setprecision(2)<<c<<endl;

      
      


    }

}



  
