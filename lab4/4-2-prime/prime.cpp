//prime.cpp
//a program that establishes whether a number is a prime number or not
//Author: Berkay Ersengun
//Date: 10/10/2017
//
//Input: Positive Number n between 2 and 1000000
//Output: n is a prime is true/false
//
//Pseudo-Code:
//
//get an integer from user
//
//do-while  (2<value<1000000) to check
//
//for i= 2 to n/2 increment 1 
//   if value/i = integer ((result *10) mod 10 = 0) 
//      print n is not prime
//      exit 
//      
//end loop
//print n is prime
//exit


#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{

  int val ; //value for checking
  
  //check if value is in the range 
  do{

    cout<<"Please enter a  value between 2 and 1000000: "<<endl;   
    cin>>val;
   
  }while (2>val || val>=1000000);
  
  //loop for calculations
  
  for (int i=2; i<=(val/2); i++)
    
    {      
      
      //check whether result is integer
      
      if ((val%i)==0){
	
	cout<<"The number "<<val<<" is not a prime number."<<endl;
	return EXIT_SUCCESS;
      }
    }
  	cout<<"The number "<<val<<" is a prime number."<<endl;
	return EXIT_SUCCESS;
	
}




  
