//switch.cpp
//a program that make calculations (addition,subtraction,multipication,division)by using numbered switch statements
//Author: Berkay Ersengun
//Date: 15/10/2017

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{

  int val1,val2; //values for the calculations
  int sum; //sum of the calculation made
  int m; //case number

  //prompts to user a value to a corresponding calculation in cases
  cout<<"Please enter the number shown below for corresponding calculation"<<endl;
  cout<<"1) Addition"<<endl;
  cout<<"2) Subraction"<<endl;
  cout<<"3) Multipication"<<endl;
  cout<<"4) Division"<<endl;
  cout<<"5) Exit"<<endl;
  
  //stores the switch number
  cin>>m;
  
  switch(m)
    {
   
  //first case for the addition
   case 1:
  //prompts user for values
  cout<<"Please enter the first value for addition: "<<endl;
  cin>>val1;
  cout<<"Please enter the second value for addition: "<<endl;
  cin>>val2;

  //addition
  sum=val1+val2;

  //prints the answer
  cout<<"The result of addition "<<val1<<" and "<<val2<<" is "<<sum<<endl;

  return EXIT_SUCCESS;

  //second case for the subtraction

    case 2:
   //prompts user for values
   cout<<"Please enter the first value for subtraction: "<<endl;
   cin>>val1;
   cout<<"Please enter the second value for subtraction: "<<endl;
   cin>>val2;

   //subraction
   sum=val1-val2;

   //prints the answer
   cout<<"The result of subraction "<<val1<<" from "<<val2<<" is "<<sum<<endl;

   return EXIT_SUCCESS;
   
    //third case for the multipication
   case 3:
   //prompts user for values
   cout<<"Please enter the first value for multipication: "<<endl;
   cin>>val1;
   cout<<"Please enter the second value for multipication: "<<endl;
   cin>>val2;

   //multipication
   sum=val1*val2;

   //prints the answer
   cout<<"The result of multipication "<<val1<<" and "<<val2<<" is "<<sum<<endl;
   return EXIT_SUCCESS;
   
   //fourth case for the division
   case 4:
   //prompts user for values
   cout<<"Please enter the first value for division: "<<endl;
   cin>>val1;
   cout<<"Please enter the second value for division: "<<endl;
   cin>>val2;

   //division
   sum=val1/val2;

   //prints the answer
   cout<<"The result of division "<<val1<<" by "<<val2<<" is "<<sum<<endl;
   return EXIT_SUCCESS;
   
  default:
    
    return EXIT_SUCCESS;
    }

}
      

  
