//lab 0

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
  double x, y, s;
  cout << endl;
  cout <<"Enter x";
  cin >> x;
  cout <<"Enter y:";
  cin >> y;
  cout << '\n';

  s = sqrt( (pow(x+y,2) + pow(x-y,2))/3.0);

  cout << fixed << showpoint <<setprecision(3);
  cout << setw(7) <<"x=" <<x << endl;
  cout << setw(7) <<"y=" <<y << endl;
  cout << setw(7) <<"s=" <<s << endl;
  cout << endl;
  
  return 0;
}
  
