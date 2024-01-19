 /*
              Name: Barsat Rithi
        Assignment: Lab 1
          Due Date: 09/20/2022
       Description: Output three numbers
              File: lab1.cpp
     */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double triangle_area (double a, double b, double c);

int main()
{
  double side_a, side_b, side_c;

  cout << endl;
  cout <<"Enter side_a: ";
  cin >> side_a;
  cout << endl;
  cout <<"Enter side_b: ";
  cin >> side_b;
  cout <<endl;
  cout <<"Enter side_c: ";
  cin >> side_c;
  cout << endl;

  cout<< "triangle_area:"<< triangle_area(side_a, side_b, side_c)<<endl;

  return 0;
}

double triangle_area (double a, double b, double c) 
{
   double p;
   
   p  = (a + b + c)/2.0;
   
   return sqrt( p*(p-a)*(p-b)*(p-c) );
}



  
