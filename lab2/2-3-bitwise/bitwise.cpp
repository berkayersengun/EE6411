//bitwise.cpp
//A program that reads the two operands and gives the output between them using various bitwise operators. 
//Author: Berkay Ersengun
//Date: 12/10/2017

#include <cstdlib>
#include <bitset>
#include <iostream>

using namespace std;

int main()
{

  int val1,val2;
  int and1,or1,xor1,nand1,nor1;
  int shiftr,shiftl;
  
  cout<< "Enter the first value: "<< endl;
  cin>>val1;
  cout<< "Enter the second value: "<<endl;
  cin>>val2;

  //one's complements of the first value in hex and binary (8bits)
  cout<<"~0x"<<hex<<val1; 
  cout<<" = 0x"<<hex<<~val1;
  cout<<" = ~"<<bitset<8>(val1)<<" = "<<~bitset<8>(val1)<<endl;
  
  //one's complements of the second value in hex and binary (8bits)
  cout<<"~0x"<<hex<<val2; 
  cout<<" = 0x"<<hex<<~val2;
  cout<<" = ~"<<bitset<8>(val2)<<" = "<<~bitset<8>(val2)<<endl;

  //the result of AND'ing first value and second value

  cout<<"0x"<<hex<<val1<<" AND 0x"<<hex<<val2;
  and1=val1&val2 ;
  cout<<" = 0x"<<hex<<and1<<" = "<<bitset<8>(val1)<<" AND "
      <<bitset<8>(val2)<<" = "<<bitset<8>(and1)<<endl;

  //the result of OR'ing first value and second value

  cout<<"0x"<<hex<<val1<<" OR 0x"<<hex<<val2;
  or1=val1|val2 ;
  cout<<" = 0x"<<hex<<or1<<" = "<<bitset<8>(val1)<<" OR "
      <<bitset<8>(val2)<<" = "<<bitset<8>(or1)<<endl;

   //the result of XOR'ing first value and second value

  cout<<"0x"<<hex<<val1<<" XOR 0x"<<hex<<val2;
  xor1=(~val1&val2)|(val1&~val2) ;
  cout<<" = 0x"<<hex<<xor1<<" = "<<bitset<8>(val1)<<" XOR "
      <<bitset<8>(val2)<<" = "<<bitset<8>(xor1)<<endl;

   //the result of NAND'ing first value and second value

  cout<<"0x"<<hex<<val1<<" NAND 0x"<<hex<<val2;
  nand1=~(val1&val2) ;
  cout<<" = 0x"<<hex<<nand1<<" = "<<bitset<8>(val1)<<" NAND "
      <<bitset<8>(val2)<<" = "<<bitset<8>(nand1)<<endl;

   //the result of NOR'ing first value and second value

  cout<<"0x"<<hex<<val1<<" NOR 0x"<<hex<<val2;
  nor1=~(val1|val2) ;
  cout<<" = 0x"<<hex<<nor1<<" = "<<bitset<8>(val1)<<" NOR "
      <<bitset<8>(val2)<<" = "<<bitset<8>(nor1)<<endl;

   //the result of shifting first value to right by second value

  cout<<"0x"<<hex<<val1<<" shifted right by 0x"<<hex<<val2;
  shiftr=val1>>val2 ;
  cout<<" = 0x"<<hex<<shiftr<<" = "<<bitset<8>(val1)<<" >> "
      <<bitset<8>(val2)<<" = "<<bitset<8>(shiftr)<<endl;

  //the result of shifting first value to left by second value

  cout<<"0x"<<hex<<val1<<" shifted left by 0x"<<hex<<val2;
  shiftl=val1<<val2 ;
  cout<<" = 0x"<<hex<<shiftl<<" = "<<bitset<8>(val1)<<" << "
      <<bitset<8>(val2)<<" = "<<bitset<8>(shiftl)<<endl;

  

  
  
}


  
