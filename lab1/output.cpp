//output.cpp
//A program that prints values in various formats
//Author: Berkay Ersengun
//Date: 19/09/2017

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  int ivalue;
  double dvalue;
  
  
  cout<< "Please enter an integer value: "<<endl; // prompts user for an integer
  cin>> ivalue; // enter a value for an integer
  cout<< "Please enter a double value: "<<endl; // prompts user for a double
  cin>>dvalue; // enter a value for a double

  cout<<"The integer value in decimal format is: "<<ivalue<<endl;
  cout<<"The integer value in octal format is: "<<oct<<ivalue<<endl;
  cout<<"The integer value in hexadecimal format is: " <<hex<<ivalue<<endl;
  cout<<"The double value in fixed format " <<fixed<<dvalue<<endl;
  cout<<"The double value in scientific format is : " <<scientific<<dvalue<<endl;
  
  cout<<"The double value with at most two decimals places : "<<fixed<<setprecision(2)<<dvalue<<endl;
  cout<<"The double value with at most twelve  decimals places : "<<fixed<<setprecision(12)<<dvalue<<endl; // try to eliminate zeros at the end of the numbers

 
  
 

  
  
 

}







