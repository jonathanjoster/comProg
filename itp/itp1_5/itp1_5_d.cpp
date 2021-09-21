#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;

  for (int i=3; i<=n; i++) {
    if (i%3 == 0) {
      cout << " " << i;
    } else {
      int x = i;
      while (x) {
        if (x%10 == 3) {
          cout << " " << i;
          break;
        }
        x /= 10;
      }
    }
  }
  cout << endl;
}