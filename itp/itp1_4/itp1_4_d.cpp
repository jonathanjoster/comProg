#include <iostream>
#include <climits>
using namespace std;

int main() {
  int min = INT_MAX;
  int max = INT_MIN;
  long long sum = 0;
  int n; cin >> n;

  while (n--) {
    int a; cin >> a;
    if (a < min) { min = a; }
    if (a > max) { max = a; }
    sum += a;
  }

  cout << min << " " << max << " " << sum << endl;
}