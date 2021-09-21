#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, K; cin >> A >> B >> K;
  vector<int> deviders;
  
  for (int i=min(A,B); i>=1; i--) {
    if (A%i==0 && B%i==0) {
      deviders.push_back(i);
    }
  }

  cout << deviders[K-1] << endl;
  return 0;
}