#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  string S; cin >> S;
  
  int ans = 0;
  for (int i=0; i<=N-3; i++) {
    if (S.substr(i, 3) == "ABC") {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}