///while.cpp
//a program that counts a given value that how many times it can be divided by 2 before the limit of 100 is reached.
//Author: Berkay Ersengun
//Date: 15/10/2017

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{

  int val,c=0; //val=entered value by user, c=total counts
 
  cout<<"Please enter a positive value: "<<endl;
  cin>>val; // asks user for a positive integer
    
  while((val)>100)
    {
      c++;
      val=val/2;
      
    }
  cout<<"The total count for the given number: "<<c-1<<endl;

  return EXIT_SUCCESS; 
}

  
  
