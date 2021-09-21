#include <iostream>
using namespace std;

int main() {
  while (true) {
    int x, y;
    cin >> x >> y;
    if (x+y == 0) { return 0; }

    if (x > y) {
      cout << y << " " << x << endl;
    } else {
      cout << x << " " << y << endl;
    }
  }
}