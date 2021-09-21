#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> a(N);

  for (int i=0; i<N; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int alice=0, bob=0;
  while (true) {
    alice += a.back();
    a.pop_back();
    if (a.empty()) { break; }
    bob += a.back();
    a.pop_back();
    if (a.empty()) { break; }
  }

  cout << alice-bob << endl;
  return 0;
}