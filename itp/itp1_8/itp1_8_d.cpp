#include <iostream>
#include <string>
using namespace std;

int main() {
  string s, p; cin >> s >> p;
  s += s.substr(0, p.size()-1);
  
  for (int i=0; i<s.size(); i++) {
    for (int j=0; j<p.size(); j++) {
      if (p[j] != s[i+j]) { break; }
      if (j == p.size()-1) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}