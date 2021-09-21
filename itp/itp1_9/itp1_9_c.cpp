#include <iostream>
#include <string>
using namespace std;

int main() {
  int n; cin >> n;

  int p1 = 0, p2 = 0;
  while (n--) {
    string s1, s2; cin >> s1 >> s2;
    if (s1 == s2) {
      p1++;
      p2++;
    } else if (s1 < s2) {
      p2 += 3;
    } else {
      p1 += 3;
    }
  }
  cout << p1 << " " << p2 << endl;
}