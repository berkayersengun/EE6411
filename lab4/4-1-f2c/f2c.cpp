#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
double fahrenheit; // variable for fahrenheit
double celsius; // variable for celsius;
// print table header
// iomanipulator "fixed" is used to change behaviour
// of setprecision to decimal places only
cout << fixed << left << setw(12) << "Fahrenheit"
<< setw(12) << "Celsius" << endl;
// start for loop
for (fahrenheit=0; fahrenheit<=300; fahrenheit+=20)
{
// calculate celsius corresponding to fahrenheit
celsius = 5.0/9.0 * (fahrenheit - 32.0);
// print values
cout << setprecision(2) << setw(12) << fahrenheit
  << setw(12) << celsius << endl;
}
return EXIT_SUCCESS;
}
