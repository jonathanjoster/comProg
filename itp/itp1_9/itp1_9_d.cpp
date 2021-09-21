#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string str; cin >> str;
  int q; cin >> q;

  string ans = "";
  while (q--) {
    string command; cin >> command;
    int i1, i2; cin >> i1 >> i2;
    
    if (command == "print") {
      ans += str.substr(i1, i2-i1+1)+"\n";
    } else if (command == "reverse") {
      string sub = str.substr(i1, i2-i1+1);
      reverse(sub.begin(), sub.end());
      str = str.replace(i1, i2-i1+1, sub);
    } else if (command == "replace") {
      string p; cin >> p;
      str = str.replace(i1, i2-i1+1, p);
    }
  }

  cout << ans;
}