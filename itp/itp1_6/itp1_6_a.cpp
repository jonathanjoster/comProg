#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> v(n);

  for (auto& e : v) {
    cin >> e;
  }

  for (int i=v.size()-1; i>=0; i--) {
    if (i == 0) {
      cout << v[i] << endl;;
    } else {
      cout << v[i] << " ";
    }
  }
}