//dowhile.cpp
//a program that determines the given value by the user is odd or even.
//Author: Berkay Ersengun
//Date: 15/10/2017

#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{

  int val,res; // val: the value entered by the user, res: the value for the calculation of determining the value odd or even
  
  //a do-while loop for the numbers given to check
  do
    {
      //prompt the user for a value 
      cout<<"Please enter a value to determine whether is odd or even: "<<endl;
      //store value in val
      cin>>val;
      //remainder of val to determine odd or even
      res=val%2;
      //checks if even number
      if (res==0 && val>0){
	cout<<val<<" is a even number."<<endl;
      }
      //checks if odd number
      else if(res==1 && val>0)
	{
	  cout<<val<<" is an odd number."<<endl;
      }
      //exits if it is not valid
      else
	{
	cout<<"Entered value is not valid"<<endl;

	return EXIT_SUCCESS;
      }
     

    }
  while(val>0);

  
  
  


}



      
      
 

