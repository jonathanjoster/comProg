#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M; cin >> N >> M;
  vector<vector<int>> s(M);

  for (int i=0; i<M; i++) {
    int k; cin >> k;
    for (int j=0; j<k; j++) {
      int sw; cin >> sw;
      s[i].push_back(--sw);
    }
  }

  vector<int> p(M);
  for (int i=0; i<M; i++) {
    cin >> p[i];
  }

  int ans = 0;
  for (int bit=0; bit<(1<<N); bit++) {
    bool ok = true;
    for (int i=0; i<M; i++) {
      int count = 0;
      for (auto e : s[i]) {
        if (bit & (1<<e)) count++;
      }
      if (count%2 != p[i]) ok = false;
    }
    if (ok) ans++;
  }

  cout << ans << endl;
  return 0;
}