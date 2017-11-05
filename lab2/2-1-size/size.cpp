//size.cpp
//A program that prints out the size of all built-in types 
//Author: Berkay Ersengun
//Date: 05/10/2017

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{

  cout<<"Size (byte) of an integer:"<<sizeof(int)<<endl;
  cout<<"Size (byte) of an unsigned integer:"<<sizeof(unsigned int)<<endl;
  cout<<"Size (byte) of a bool:"<<sizeof(bool)<<endl;
  cout<<"Size (byte) of a character:"<<sizeof(char)<<endl;
  cout<<"Size (byte) of the largest supported character set:"<<sizeof(wchar_t)<<endl;
  cout<<"Size (byte) of a character of a 16 bits unit:"<<sizeof(char16_t)<<endl;
  cout<<"Size (byte) of a character of a 32 bits unit:"<<sizeof(char32_t)<<endl;
  cout<<"Size (byte) of a short:"<<sizeof(short)<<endl;
  cout<<"Size (byte) of a unsigned short:"<<sizeof(unsigned short)<<endl;
  cout<<"Size (byte) of a long:"<<sizeof(long)<<endl;
  cout<<"Size (byte) of a unsigned long:"<<sizeof(unsigned long)<<endl;
  cout<<"Size (byte) of a long long:"<<sizeof(long long)<<endl;
  cout<<"Size (byte) of a unsigned long long:"<<sizeof(unsigned long long)<<endl;
  cout<<"Size (byte) of a float:"<<sizeof(float)<<endl;
  cout<<"Size (byte) of a double"<<sizeof(double)<<endl;
  cout<<"Size (byte) of a long double:"<<sizeof(long double)<<endl;
  cout<<"Size (byte) of a pointer:"<<sizeof(int*)<<endl;
}
