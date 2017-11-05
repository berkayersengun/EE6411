//truth.cpp
//A program that utilizes bitwise operators to compute (AND,OR,XOR and complement operators 
//Author: Berkay Ersengun
//Date: 08/10/2017

#include <bitset>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int var1= 1; // 1=0001
  int var2=12; // 12=1100     integers for the table 
  int var3=10; // 10=1010
  
  cout<<"    ";
  
  for (int i=0;i<3;i++) //loop for the initial row
      {
    cout<<setw(8)<<right<<bitset<4>(var2);
      }
    
   cout<<endl;

   cout<<setw(2)<<"~"<<setw(2)<<bitset<2>(var1);
   cout<<setw(4)<<"&"<<bitset<4>(var3);
   cout<<setw(4)<<"|"<<bitset<4>(var3);
   cout<<setw(4)<<"^"<<bitset<4>(var3)<<endl;
  
   cout<<"----";
  for (int i=0; i<3; i++)  // loop for "-----" in the third row
    {
      cout<<setw(8)<<"-----";
    }
  cout<<"\n";

  cout<<setw(4)<<~bitset<2>(var1);
  cout<<setw(8)<<bitset<4>(var2&var3);
  cout<<setw(8)<<bitset<4>(var2|var3);
  cout<<setw(8)<<bitset<4>(var2^var3)<<endl;

  
  
}
