#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N ;
  string S; cin >> S;
  vector<int> nums(1000);
  
  int ans = 0;
  for (int n1=0; n1<=9; n1++) {
    int pos1 = S.find(to_string(n1));
    if (pos1 == -1) { continue; }
    for (int n2=0; n2<=9; n2++) {
      int pos2 = S.substr(pos1+1).find(to_string(n2));
      if (pos2 == -1) { continue; }
      for (int n3=0; n3<=9; n3++) {
        int pos3 = S.substr(pos1+1).substr(pos2+1).find(to_string(n3));
        if (pos3 == -1) { continue; }
        if (nums[100*n1+10*n2+n3] == 0) {
          ans++;
          nums[100*n1+10*n2+n3] = 1;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}