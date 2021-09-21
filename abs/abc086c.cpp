#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  int prevT=0, prevX=0, prevY=0;
  bool ok = true;
  while (N--) {
    int newT, newX, newY; cin >> newT >> newX >> newY;
    int dt = abs(newT-prevT);
    int dist = abs(newX-prevX)+abs(newY-prevY);

    if (dt<dist || dt%2!=dist%2) {
      ok = false;
      break;
    }
    prevT = newT;
    prevX = newX;
    prevY = newY;
  }

  if (ok) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}