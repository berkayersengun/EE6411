//prime.cpp
//a program that finds all prime numbers less than or equal to a given value
//Author: Berkay Ersengun
//03.11.2017
/////////////////////////////////////////////////////
// Inputs: an integer up to 200
// Outputs: integers as prime numbers in the range given
////////////////////////////////////////////////////////////
// 1. Create a list of consecutive integers from two to n
// 2. Initially, let p equal 2, the first prime number
// 3. Strike from the list all multiplies of p less than or equal to n
// 4. Find the first number remaining on the list greater than p (this number is the next prime); replace p with this number
// 5. Repeat steps 3 and 4 until p is greater than n
// 6. All the remaining numbers on the list are prime
//////////////////////////////////////////////////////////////
// Pseudo-Code:
// Prompt user a integer
// set p[0] a varible 2 initially
// for i from 0 to n-1 increment one
//     p[i]=a
//     store the values in an array
//     increment a 
// k=2
// b=0
// while (k less than or equal to n-2)
//   
//     while (b+k less than or equal to n-2 )
//           if p[b+k]%k=0

//           p[b+k]=0
//           b=b+k
//     x=1
//     while x less than or equal to n-2
//           if p[x]!=0
//              k=p[x]
//              b++ 
//              break
//           else
//              increment x one
/////////////////////////////////////////////////////////

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{


  int a[250];
  int n=200;
 
      
  int x=2;
  for (int i=2; i<n+1; i++)
    {
      a[i]=x;
      x++;
            
    }
   int p=2;
  while (p<n)
    {
     
      for (int j=p; j<=n; j=j+p)
	{
	  if (a[j+p]%p==0)
	    {
	      a[j+p]=0;
	 
	    }
      
	  
	}
  
      for(int x=p+1; x<=n; x++)
	{
	  if(a[x]!=0)
	    {
	      p=a[x];
	      break;  
	    }
	  else if (a[x]==0)
	    p++;
	    
	}
           
    }
  cout<<"The prime numbers are: {"<<a[2];
  for (int i=3; i<n+1; i++)
	{
	  if(a[i]!=0)
	    cout<<","<<a[i];
               

	}
  cout<<"}"<<endl;
}
  













