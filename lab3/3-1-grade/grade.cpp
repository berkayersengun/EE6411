//grade.cpp
//A program that converts the grade out of 100 of a student to a correspanding letter grade.
//Author: Berkay Ersengun
//Date: 03/10/2017

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int grade;

  cout<<"Please ENTER the grade of the student in percentage: "<<endl;
 
  
  cin>>grade;
  
  
  while(grade>100 || grade<0)
    {
       
      cout<<"Please enter a value between 0-100"<<endl;
      cin>>grade;
    }
  
  if (grade>=80)
    cout<<"The letter grade for the given percentage is : A1"<<endl;

  else if (grade>=75 && grade<80) 
    cout<<"The letter grade for the given percentage is : A2"<<endl; 

  else if (grade>=70 && grade<75) 
    cout<<"The letter grade for the given percentage is : B1"<<endl; 

  else if (grade>=64 && grade<70) 
    cout<<"The letter grade for the given percentage is : B2"<<endl;

  else if (grade>=58 && grade<64) 
    cout<<"The letter grade for the given percentage is : B3"<<endl; 

  else if (grade>=52 && grade<58) 
    cout<<"The letter grade for the given percentage is : C1"<<endl;

  else if (grade>=46 && grade<52) 
    cout<<"The letter grade for the given percentage is : C2"<<endl;

  else if (grade>=40 && grade<46) 
    cout<<"The letter grade for the given percentage is : C3"<<endl;

  else if (grade>=33 && grade<40) 
    cout<<"The letter grade for the given percentage is : D1"<<endl;

  else if (grade>=25 && grade<33) 
    cout<<"The letter grade for the given percentage is : D2"<<endl;

  else  
    cout<<"The letter grade for the given percentage is : F"<<endl; 
      
  

}















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































