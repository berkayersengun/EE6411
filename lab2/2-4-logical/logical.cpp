//logical.cpp
//a program that prints out truth tables by using logical operators
//Author: Berkay Ersengun
//Date: 14/10/2017

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  bool A,B;

  //logical NOT truth table
  cout<<"Truth Table of NOT for A :"<<endl;
   cout<<"\n";
  cout<<"A\t  true  false"<<endl;
  cout<<"-------------------------------"<<endl;
  A=true;
  cout<<left<<setw(10)<<"NOT A";
  cout<<left<<setw(6)<<boolalpha<<(!A);
  A=false;
  cout<<left<<setw(6)<<boolalpha<<(!A)<<endl;
  cout<<"\n";
 
  //logical AND truth table
  cout<<"Truth Table for the A AND B :"<<endl;
 cout<<"\n";
  cout<<"A\t  true  false true  false"<<endl;
  cout<<"B\t  true  true  false false"<<endl;
  cout<<"-------------------------------"<<endl;
  A=true;
  B=true;
  cout<<left<<setw(10)<<"A AND B";
  cout<<left<<setw(6)<<boolalpha<<(A&&B);
  A=false;
  cout<<left<<setw(6)<<boolalpha<<(A&&B);
  A=true;
  B=false;
  cout<<left<<setw(6)<<boolalpha<<(A&&B);
  A=false;
  cout<<left<<setw(6)<<boolalpha<<(A&&B)<<endl;
  cout<<"\n";

  //logical OR truth table
  cout<<"Truth table for the A OR B :"<<endl;
   cout<<"\n";
  cout<<"A\t  true  false true  false"<<endl;
  cout<<"B\t  true  true  false false"<<endl;
  cout<<"-------------------------------"<<endl;
  A=true;
  B=true;
  cout<<left<<setw(10)<<"A OR B";
  cout<<left<<setw(6)<<boolalpha<<(A||B);
  A=false;
  cout<<left<<setw(6)<<boolalpha<<(A||B);
  A=true;
  B=false;
  cout<<left<<setw(6)<<boolalpha<<(A||B);
  A=false;
  cout<<left<<setw(6)<<boolalpha<<(A||B)<<endl;
  cout<<"\n";

    //logical NAND truth table
  cout<<"Truth Table for the A NAND B :"<<endl;
   cout<<"\n";
  cout<<"A\t  true  false true  false"<<endl;
  cout<<"B\t  true  true  false false"<<endl;
  cout<<"-------------------------------"<<endl;
  A=true;
  B=true;
  cout<<left<<setw(10)<<"A NAND B";
  cout<<left<<setw(6)<<boolalpha<<!(A&&B);
  A=false;
  cout<<left<<setw(6)<<boolalpha<<!(A&&B);
  A=true;
  B=false;
  cout<<left<<setw(6)<<boolalpha<<!(A&&B);
  A=false;
  cout<<left<<setw(6)<<boolalpha<<!(A&&B)<<endl;
  cout<<"\n";

  //logical NOR truth table
  cout<<"Truth table for the A NOR B :"<<endl;
   cout<<"\n";
  cout<<"A\t  true  false true  false"<<endl;
  cout<<"B\t  true  true  false false"<<endl;
  cout<<"-------------------------------"<<endl;
  A=true;
  B=true;
  cout<<left<<setw(10)<<"A NOR B";
  cout<<left<<setw(6)<<boolalpha<<!(A||B);
  A=false;
  cout<<left<<setw(6)<<boolalpha<<!(A||B);
  A=true;
  B=false;
  cout<<left<<setw(6)<<boolalpha<<!(A||B);
  A=false;
  cout<<left<<setw(6)<<boolalpha<<!(A||B)<<endl;
  cout<<"\n";
  
  //logical XOR truth table
  cout<<"Truth table for the A XOR B :"<<endl;
   cout<<"\n";
  cout<<"A\t  true  false true  false"<<endl;
  cout<<"B\t  true  true  false false"<<endl;
  cout<<"-------------------------------"<<endl;
  A=true;
  B=true;
  cout<<left<<setw(10)<<"A XOR B";
  cout<<left<<setw(6)<<boolalpha<<((!A&&B)||(A&&!B));
  A=false;
  cout<<left<<setw(6)<<boolalpha<<((!A&&B)||(A&&!B));
  A=true;
  B=false;
  cout<<left<<setw(6)<<boolalpha<<((!A&&B)||(A&&!B));
  A=false;
  cout<<left<<setw(6)<<boolalpha<<((!A&&B)||(A&&!B))<<endl;
  cout<<"\n";
  
  //logical XNOR truth table
  cout<<"Truth table for the A XNOR B :"<<endl;
   cout<<"\n";
  cout<<"A\t  true  false true  false"<<endl;
  cout<<"B\t  true  true  false false"<<endl;
  cout<<"-------------------------------"<<endl;
  A=true;
  B=true;
  cout<<left<<setw(10)<<"A XNOR B";
  cout<<left<<setw(6)<<boolalpha<<((A&&B)||(!A&&!B));
  A=false;
  cout<<left<<setw(6)<<boolalpha<<((A&&B)||(!A&&!B));
  A=true;
  B=false;
  cout<<left<<setw(6)<<boolalpha<<((A&&B)||(!A&&!B));
  A=false;
  cout<<left<<setw(6)<<boolalpha<<((A&&B)||(!A&&!B))<<endl;
  cout<<"\n";
}
