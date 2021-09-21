#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  double r;
  cin >> r;

  double area = r*r*M_PI;
  double circum = 2*r*M_PI;
  cout << fixed << setprecision(6) << area << " " << circum << endl;
}