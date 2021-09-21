#include <iostream>
using namespace std;

int main() {
  char str[1200];
  cin.getline(str, sizeof(str));

  int gap = 'a'-'A';
  for (int i=0; i<sizeof(str); i++) {
    if ('A'<=str[i] && str[i]<='Z') {
      str[i] = str[i]+gap;
    } else if ('a'<=str[i] && str[i]<='z') {
      str[i] = str[i]-gap;
    }
  }

  cout << str << endl;
}