#include <bits/stdc++.h>
using namespace std;

int main() {
  string S; cin >> S;
  bool ok = true;
  while (!S.empty()) {
    int len = S.size();
    if (len>=5 && (S.substr(len-5, 5)=="dream"||S.substr(len-5, 5)=="erase")) {
      S.erase(len-5);
    } else if (len>=6 && S.substr(len-6, 6) == "eraser") {
      S.erase(len-6);
    } else if (len>=7 && S.substr(len-7, 7) == "dreamer") {
      S.erase(len-7);
    } else {
      ok = false;
      break;
    }
  }

  if (ok) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}