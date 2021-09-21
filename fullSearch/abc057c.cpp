#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N; cin >> N;
  vector<pair<int,int>> p;
  
  for (int i=1; i<=sqrt(N); i++) {
    if (N%i == 0) {
      p.push_back(make_pair(i,N/i));
    }
  }

  int ans = INT_MAX;
  for (int i=0; i<p.size(); i++) {
    int f = max(to_string(p[i].first).size(), to_string(p[i].second).size());
    ans = f<ans ? f : ans;
  }

  cout << ans << endl;
  return 0;
}