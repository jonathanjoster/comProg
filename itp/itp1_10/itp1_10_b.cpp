#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  int a, b, C; cin >> a >> b >> C;

  double rad = C*M_PI/180;
  double c = sqrt(a*a+b*b-2*a*b*cos(rad));

  double S = a*b*sin(rad)/2;
  double L = a+b+c;
  // ah/2 = S
  double h = 2*S/a;

  cout << fixed << setprecision(8) << S << endl;
  cout << fixed << setprecision(8) << L << endl;
  cout << fixed << setprecision(8) << h << endl;
}