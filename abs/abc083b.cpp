#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B; cin >> N >> A >> B;

  int ans = 0;
  for (int i=1; i<=N; i++) {
    int x = i;
    int sum = 0;
    while (x) {
      sum += x%10;
      x /= 10;
    }

    if (A <= sum && sum <= B) {
      ans += i;
    }
  }

  cout << ans << endl;
  return 0;
}