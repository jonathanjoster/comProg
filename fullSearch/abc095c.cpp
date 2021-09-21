#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, X, Y; cin >> A >> B >> C >> X >> Y;
  
  int ans = INT_MAX;
  for (int z=0; z<=max(X,Y)*2; z++) {
    int x = X-z/2>=0 ? X-z/2 : 0;
    int y = Y-z/2>=0 ? Y-z/2 : 0;
    int price = A*x+B*y+C*z;
    ans = price<ans ? price : ans;
  }

  cout << ans << endl;
  return 0;
}