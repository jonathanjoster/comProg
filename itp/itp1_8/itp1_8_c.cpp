#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  string str;
  vector<int> count(26);
  while (cin >> str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    for (int i=0; i<str.size(); i++) {
      count[str[i]-'a']++;
    }
  }

  for (int i=0; i<count.size(); i++) {
    printf("%c : %d\n", 'a'+i, count[i]);
  }
}