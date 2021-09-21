#include <bits/stdc++.h>
using namespace std;

int main() {
  string S; cin >> S;
  
  int ans = 0;
  for (int i=0; i<S.size()-ans; i++) {
    int point = 0;
    for (int j=0; j<S.size(); j++) {
      if (S[i+j]!='A' && S[i+j]!='C' && S[i+j]!='G' && S[i+j]!='T') {
        break;
      }
      point++;
    }
    ans = point>ans ? point : ans;
  }

  cout << ans << endl;
  return 0;
}