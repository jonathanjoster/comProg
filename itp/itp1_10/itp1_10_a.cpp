#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

  double dx = x2-x1;
  double dy = y2-y1;

  double ans = sqrt(dx*dx+dy*dy);
  cout << fixed << setprecision(8) << ans << endl;
}