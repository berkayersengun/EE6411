//ctoftable1.cpp
//A program that calculates and shows a relation table between Celsius and Fahrenheit
//Author: Berkay Ersengun
//Date: 15/10/2017

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{

 float f,c; //f=fahrenheit,c=celsius
 float s; //step size for the increase
 float l,u; // l=lower u=upper limits for the range of temp

 cout<<"Please enter the lower bound of range of temperature in Fahrenheit: "<<endl;
 cin>>l;

 cout<<"Please enter the upper bound of range of temperature in Fahrenheit: "<<endl;
 cin>>u;

 cout<<"Please enter the step size for the entered range of temperatures: "<<endl;
 cin>>s;
 
  cout<<setw(12)<<left<<"Fahrenheit ";
  cout<<setw(12)<<left<<"Celsius"<<endl;
  
  

  for (f=l;f<=u;f+=s)
    {
      c=(5.0/9.0)*(f-32);
      cout<<setw(12)<<left<<fixed<<setprecision(2)<<f;
     
      cout<<setw(12)<<left<<fixed<<setprecision(2)<<c<<endl;

      
      


    }

}



  
