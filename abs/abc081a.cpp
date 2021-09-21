#include <bits/stdc++.h>
using namespace std;

int main() {
  char bits[3]; cin >> bits;

  int ans = 0;
  for (int i=0; i<3; i++) {
    if (bits[i]-'0' == 1) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}