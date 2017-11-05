//radius.cpp
//a program that calculates radius of a circle
//Author: Berkay Ersengun
//Date: 19/09/2017
////////////////////////////////

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
  double radius,diameter,circumference,area; 
  double pi=3.14159; // define the pi number

  cout<<"Please enter the value of radius: " ;
  cin>>radius;
  cout<< "Radius is: " << radius<<endl;
  diameter=2*radius; // compute diameter
    
  cout<< "Diameter is: " <<diameter<<endl;
  circumference= 2*pi*radius; //compute circumference
  
  cout<<"Circumference is: "<<circumference;
  
  area=pi*(radius*radius); //compute area
  cout<<"Area is: " <<area<<endl;
  

  return EXIT_SUCCESS; // exit program
}
  
    




  
