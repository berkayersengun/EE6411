//switch1.cpp
//a program that make calculations (addition,subtraction,multipication,division)by using switch statements with char variables 
//Author: Berkay Ersengun
//Date: 15/10/2017

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

  int val1,val2; //values for the calculations
  int sum; //sum of the calculation made
  char m;
  
  //prompts to user a char to a corresponding calculation in cases
  cout<<"Please enter the number shown below for corresponding calculation"<<endl;
  cout<<"+) Addition"<<endl;
  cout<<"-) Subraction"<<endl;
  cout<<"*) Multipication"<<endl;
  cout<<"/) Division"<<endl;
  cout<<"x) Exit"<<endl;
  
  //stores the switch char
  cin>>m;

  switch(m)
    {
      
      //case for addition
    case '+':
      //prompts for the first value for addition
      cout<<"Please enter the first value for addition: "<<endl;
      cin>>val1;
      //prompts for the second value for addition
      cout<<"Please enter the second value for the addition: "<<endl;
      cin>>val2;

      //addition
      sum=val1+val2;
      //prints the result
      cout<<"The result of addition "<<val1<<" and "<<val2<<" is "<<sum<<endl;

      return EXIT_SUCCESS;
      
      //case for subtraction
      case '-':
      //prompts for the first value for subtraction
      cout<<"Please enter the first value for subtraction: "<<endl;
      cin>>val1;
      //prompts for the second value for subtraction
      cout<<"Please enter the second value for the subtraction: "<<endl;
      cin>>val2;

      //subtraction
      sum=val1-val2;
      //prints the result
      cout<<"The result of subtraction "<<val1<<" from "<<val2<<" is "<<sum<<endl;

      return EXIT_SUCCESS;
      
      //case for multipication
      case '*':
      //prompts for the first value for multipication
      cout<<"Please enter the first value for multipication: "<<endl;
      cin>>val1;
      //prompts for the second value for multipication
      cout<<"Please enter the second value for the multipication: "<<endl;
      cin>>val2;     

      //multipication
      sum=val1*val2;
      //prints the result
      cout<<"The result of multipication "<<val1<<" and "<<val2<<" is "<<sum<<endl;

      return EXIT_SUCCESS;
      
      //case for division
    
      case '/':
	//prompts for the first value for division
      cout<<"Please enter the first value for division: "<<endl;
      cin>>val1;
      //prompts for the second value for division
      cout<<"Please enter the second value for the division: "<<endl;
      cin>>val2;

      //division
      sum=val1/val2;
      //prints the result
      cout<<"The result of division "<<val1<<" by "<<val2<<" is "<<sum<<endl;

      return EXIT_SUCCESS;

      //case for exit
    case 'x':
      return EXIT_SUCCESS;
      
    }
  
}
    
