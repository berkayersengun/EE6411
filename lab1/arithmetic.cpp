//arithmetic.cpp
//A program that prints the two given numbers with all arithmetic operators 
//Author: Berkay Ersengun
//Date: 19/09/2017

#include <cstdlib>
#include <iostream>


using namespace std;

int main ()
{

  int value1,value2;
  int pos,neg,inc,dec; //pos: positive, neg: negative, inc:incremented, dec:decremented 
  int res,res1,res2,res3,res4; // res: result

  cout<<"Please enter the first value: "<<endl ;
  cin>>value1;
  cout<<"Please enter the second value: "<<endl;
  cin>>value2;

  pos=+value1;
  cout<<"Positive Value1 is: "<<pos<<endl;

  neg=-value1;
  cout<<"Negative Value1 is: "<<neg<<endl;

  inc=value1;
  cout<<"Incremented Value1 is: "<<++inc<<endl;

  dec=value1;
  cout<<"Decremented Value1 is: "<<--dec<<endl;
  
  res=value1+value2; 
  cout<<"Value1+Value2= "<<res<<endl;

  res1=value1-value2;
  cout<<"Value1-Value2= "<<res1<<endl;

  res2=value1*value2;
  cout<<"Value1*Value2= "<<res2<<endl;

  res3=value1/value2;
  cout<<"Value1/Value2= "<<res3<<endl;

  res4=value1%value2;
  cout<<"Remainder of of Value1 divided by Value2: "<<res4<<endl;
  
}
  
