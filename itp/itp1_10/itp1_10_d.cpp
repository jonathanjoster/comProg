#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> x(n), y(n);

  for (int i=0; i<n; i++) {
    cin >> x[i];
  }
  for (int i=0; i<n; i++) {
    cin >> y[i];
  }

  double d1=0;
  double sum2=0, sum3=0;
  double di=0;
  for (int i=0; i<n; i++) {
    int diff = abs(x[i]-y[i]);
    d1 += diff;
    sum2 += pow(diff, 2);
    sum3 += pow(diff, 3);
    di = (diff>di) ? diff : di;
  }
  double d2 = pow(sum2, 1./2);
  double d3 = pow(sum3, 1./3);

  cout << fixed << setprecision(8) << d1 << endl;
  cout << fixed << setprecision(8) << d2 << endl;
  cout << fixed << setprecision(8) << d3 << endl;
  cout << fixed << setprecision(8) << di << endl;
}