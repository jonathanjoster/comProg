#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string W; cin >> W;
  transform(W.begin(), W.end(), W.begin(), ::tolower);

  string str;
  int ans = 0;
  while (cin >> str) {
    if (str == "END_OF_TEXT") { break; }
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    if (str == W) { ans++; }
  }

  cout << ans << endl;
}