#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<vector<pair<int,int>>> v(N);
  for (int i=0; i<N; i++) {
    int A; cin >> A;
    for (int j=0; j<A; j++) {
      int x, y; cin >> x >> y;
      v[i].push_back(make_pair(--x,y));
    }
  }

  int ans = 0;
  for (int bit=0; bit<(1<<N); bit++) {
    bool ok = true;
    for (int i=0; i<N; i++) {
      if (!(bit & (1<<i))) { continue; }
      for (auto p : v[i]) {
        if (p.second && !(bit & (1<<p.first)) ||
           !p.second && bit & (1<<p.first)) {
          ok = false;
          break;
        }
      }
      if (!ok) { break; }
    }
    if (ok) { ans = bit>ans ? bit : ans; }
  }
  // for (int bit=0; bit<(1<<N); bit++) {
  //   bool ok = true;
  //   for (int i=0; i<M; i++) {
  //     int count = 0;
  //     for (auto e : s[i]) {
  //       if (bit & (1<<e)) count++;
  //     }
  //     if (count%2 != p[i]) ok = false;
  //   }
  //   if (ok) ans++;
  // }

  cout << ans << endl;
  return 0;
}