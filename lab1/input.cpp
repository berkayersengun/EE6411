//input.cpp
//simple program to demonstrate user input.
//uses cin to read in an integer value.
//Author: Berkay Ersengun
//Date: 19/09/2017

#include <cstdlib>
#include <iostream>

using namespace std;

int main ()
{
  int value; // variable for user input
  //read an integer from user
  cout <<"please enter an integer value: " ;
  cin >> value;
  //echo value back to user
  cout << "\nYou entered value " << value << endl;
  // exit program
  return EXIT_SUCCESS;
}
