 /*
              Name: Barsat Rithi
        Assignment: LAB2
          Due Date: 10/02/2023
       Description: Determine which number is greater
              File: lab2.cpp
     */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double  val_1, val_2;
   
   cout<<fixed<<setprecision(0);
   cout<<"number one:  "<<setw(1)<<val_1;
   cin>>val_1;
   cout<<"number two:  "<<setw(1)<<val_2;
   cin>>val_2;
    
   if(val_1>val_2)
     cout<<"First number  "<<setw(2)<<val_1;
   else
     cout<<"Second number "<<setw(2)<<val_2;
   
     cout << " is bigger"<<endl;
    
    return 0;
}

 /*
Sample Output:

>$ lab2
number one:  034
number two:  022
First number  34 is bigger
>$

 */



  
