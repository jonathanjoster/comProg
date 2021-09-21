#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  while (true) {
    int n; cin >> n;
    if (n == 0) { break; }

    vector<int> scores(n);
    double sum = 0;
    for (int i=0; i<scores.size(); i++) {
      cin >> scores[i];
      sum += scores[i];
    }
    double m = sum/scores.size();
    
    sum = 0;
    for (int i=0; i<scores.size(); i++) {
      sum += (scores[i]-m)*(scores[i]-m);
    }
    double ans = sqrt(sum/n);

    cout << fixed << setprecision(8) << ans << endl;
  }
}