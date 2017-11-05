///////////////////////////////////////////////
// integrate.cpp
// 
// template file for exercise 4.3
// provides template for program to integrate
// function x^2 + 2x + 3
//
// author: Berkay Ersengun
// date: 16/10/2017
///////////////////////////////////////////////

#include <cstdlib>
#include <iostream>

using namespace std;

double integrate(double lower, double upper, int steps);
double f(double x);

int main() 
{

  double y,z,result;
  int steps;
  
  // read in values for y and z
  cout << "\nPlease enter the limits y and z (-10.5 <= y < z <= 30.75): ";
  cin >> y >> z;
  // check that values are within valid range
  if (y < -10.5 || y >= 30.75 || y >= z || z > 30.75) {
    cout << "Illegal Range - terminating program\n";
  } else {
    // scan in number of steps
    cout << "\nPlease enter the number of steps: ";
    cin >> steps;
    
    // call integrate
    result = integrate(y,z,steps);
    
    // print result
    cout << "\n\nIntegration of f(x) from " << y << " to " << z
	 << " yields " << result << endl << endl;
  }
  return EXIT_SUCCESS;
}

///////////////////////////////////////////////
// function integrate
// return the result of numerical integration
// of the function f(x) between the limits 
// upper and lower, using steps number of 
// squares for approximation.
//
// param: lower - lower limit
//	  upper - upper limit
//	  steps - number of squares
// return: approximated numerical integration
//	   of f(x) in range lower to upper
///////////////////////////////////////////////
// pseudo-code for integrate function:
//
// calculate width s of each step
// s=(upper-lower)/steps
//
// for loop from i=0 to steps-1 increment 1
//  temp = f(lower + (i*s))*s
//  result = result + temp
//  exit loop
//return result
//  

double integrate(double lower, double upper, int steps) 
{
  int i;
  double s;
  double result=0;
  
  s=(upper-lower)/steps;

    for (i=0; i<steps; i++)
    {
     result += f(lower + (i*s))*s;
       
    }
  
  
  return result;
  
}

///////////////////////////////////////////////
// function f(x)
// this function returns the value of the 
// function f() for any given x. f() resembles
// the function x^2 + 2x + 3. to assign the
// value of f(x) for x=3.141 to a double variable 
// "value" just use the call "value = f(3.141);"
//
// param: x - number for which function value 
//            is sought
// return: numeric value of x^2 + 2x + 3 for 
//         the given x
///////////////////////////////////////////////
double f(double x) 
{
  return x*x + 2*x + 3;
}
