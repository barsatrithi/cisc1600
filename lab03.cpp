 /*
              Name: Barsat Rithi
        Assignment: lab03
          Due Date: 10/10/2023
       Description: Output ten random numbers given interval [0,5)
              File: lab03.cpp
     */

#include <iostream>
#include <iomanip>

using namespace std;

unsigned int seed = 7;
double random (unsigned int & seed);

int main() {
  
  cout<<fixed<<showpoint<<setprecision (4);
    for (int i = 0; i < 10; ++i) {
        double random_value = random(seed) * 5.0;
	cout<< "Random value "<<setw(2)<< i + 1 << ": " << random_value<<endl;
    }

    return 0;
}

double random(unsigned int &seed) {
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed) / double(MODULUS);
}

/*
Sample output
>$  lab03
Random value  1: 3.4967
Random value  2: 0.6413
Random value  3: 4.6793
Random value  4: 2.6608
Random value  5: 4.0622
Random value  6: 4.5143
Random value  7: 0.0702
Random value  8: 1.1013
Random value  9: 3.4367
Random value 10: 1.2382
>$ 
*/

