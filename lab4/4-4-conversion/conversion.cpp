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
void ctwo(int a);
void cfive(int a);
void ctwelve(int a);


		
int main()
{

  int val; //value in decimal
  int two[100],five[100],twelve[100]; //arrays to store the values
  int base;
  //prompt user for a value in decimal
  cout<<"Please enter a positive integer: "<<endl;
  cin>>val;
  //prompt user for a base to convert the given value
  cout<<"Please enter the base to convert the given value (2,5 or 12): "<<endl;
  cin>>base;

  if (base==2)
    {
      
      ctwo(val);
	  }

  else if (base==5)
    {
      cfive(val);
    }
  else if (base==12)
    {
      ctwelve(val);
    }
  
}

	void ctwo(int a)
	{
	  
	int b[100];
	int i=0;
	while(a!=0){
	  b[i]=a%2;
	  a=a/2;
	  i++;
	   
	  
	}
	
	for(int j=i; j>0; j--)
	  {
	    cout<<b[j-1];
	  }	  
	cout<<endl;
	
	}

void cfive(int a)
	{
	  
	int b[100];
	int i=0;
	while(a!=0){
	  b[i]=a%5;
	  a=a/5;
	  i++;
	   
	  
	}
	
	for(int j=i; j>0; j--)
	  {
	    cout<<b[j-1];
	  }	  
	cout<<endl;
	
	}
void ctwelve(int a)
	{
	  
	int b[100];
	int i=0;
	while(a!=0){
	  b[i]=a%12;
	  a=a/12;
	  i++;
	   
	  
	}
	
	for(int j=i; j>0; j--)
	  {
	    cout<<hex<<b[j-1];
	  }	  
	cout<<endl;
	
	}

	







  

