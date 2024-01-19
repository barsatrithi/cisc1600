   /*
              Name: Barsat Rithi
        Assignment: lab4
          Due Date: 10/23/2023
       Description: find distance from the midpoint greater than 0.5
              File: lab4.cpp
     */

#include <iostream>
#include <cmath>

const int MODULUS = 15749;
const int MULTIPLIER = 69069;
const int INCREMENT = 1;

double random(int& seed) {
    seed = (MULTIPLIER * seed + INCREMENT) % MODULUS;
    return static_cast<double>(seed) / MODULUS;
}

using namespace std;

int main() {
    int seed = 42;

    double x, y;
    double midpointX = 0.5;
    double midpointY = 0.5;

    while (true) {
        x = random(seed);
        y = random(seed);

        double distance = sqrt(pow(x - midpointX, 2) + pow(y - midpointY, 2));

        if (distance > 0.5) {
            cout << "point with distance > 0.5: (" << x << ", " << y << ")" << endl;
            break;
        }
    }

    return 0;
}

   /*
Sample Output:
point with distance > 0.5: (0.998159, 0.817322)
     */


