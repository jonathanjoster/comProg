#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> A(N);

  for (int i=0; i<N; i++) {
    cin >> A[i];
  }

  int ans = 0;
  while (true) {
    bool escape = false;
    for (int i=0; i<N; i++) {
      if (A[i]%2 == 1) {
        escape = true;
        break;
      }
      A[i] /= 2;
    }

    if (escape) { break; }
    ans++;
  }

  cout << ans << endl;
  return 0;
}