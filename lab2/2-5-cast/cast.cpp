//cast.cpp
//a program that shows the results of using arithmetic operators between one double and one integer
//Author: Berkay Ersengun
//14/10/2017

#include <iomanip>
#include <cstdlib>
#include <iostream>

using namespace std;

int main ()
{

  double d,rd;
  int i,ri;

  cout<<"Please enter a double value"<<endl;
  cin>>d; // ask user for a double
  cout<<"Please enter an integer value"<<endl;
  cin>>i; //ask user for an integer

  rd=i+d;
  ri=i+d;
  cout<<"Addition of the values equals in integer: "<<ri<<endl;
  cout<<"Addition of the values equals in double: "<<rd<<endl;

  rd=i-d;
  ri=i-d;
  cout<<"Subtraction of the values equals in integer: "<<ri<<endl;
  cout<<"Subtraction of the values equals in double: "<<rd<<endl;

  rd=i*d;
  ri=i*d;
  cout<<"Multipication of the values equals in integer: "<<ri<<endl;
  cout<<"Multipication of the values equals in double: "<<rd<<endl;

  rd=i/d;
  ri=i/d;
  cout<<"Division of the values equals in integer: "<<ri<<endl;
  cout<<"Divison of the values equals in double: "<<rd<<endl;
  
  




  
}

  
