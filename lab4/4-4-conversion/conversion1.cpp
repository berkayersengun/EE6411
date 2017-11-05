//conversion.cpp
//a program that converts an integer into different bases
//Author: Berkay Ersengun
//Date: 16/10/2017
//
// input: integers in base 10
// output: integers in desired base (2,5 or 12)
///////////////////////////////////////////////
// pseudo-code for conversion program
//get an integer from user
// while(value>0)
//  divide value by desired base
//  save the remainder in an array
//  exit
// 
// print the array contains remainder
// exit
////////////////////////////////////////////////

#include <cstdlib>
#include <iostream>

using namespace std;
void conversion(int a,int n);



		
int main()
{
 
  int val; //value in decimal
  
  int base;
  //prompt user for a value in decimal
  cout<<"Please enter a positive integer: "<<endl;
  cin>>val;
  //prompt user for a base to convert the given value
  cout<<"Please enter the base to convert the given value (2,5 or 12): "<<endl;
  cin>>base;
  
  conversion(val,base);
       

  
}


void conversion(int a,int n)
	{
	  
	int b[100];
	int i=0;
	while(a!=0){
	  b[i]=a%n;
	  a=a/n;
	  i++;
	   
	  
	}
	
	for(int j=i; j>0; j--)
	  {
	    cout<<hex<<b[j-1];
	  }	  
	cout<<endl;
	
	}

	







  

