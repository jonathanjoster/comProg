#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<vector<int>> v(4, vector<int>(13+1));
  vector<char> suits{'S', 'H', 'C', 'D'};

  while (n--) {
    char suit; int rank;
    cin >> suit >> rank;
    
    if (suit == suits[0]) {
      v[0][rank] = 1;
    } else if (suit == suits[1]) {
      v[1][rank] = 1;
    } else if (suit == suits[2]) {
      v[2][rank] = 1;
    } else {
      v[3][rank] = 1;
    }
  }

  for (int i=0; i<v.size(); i++) {
    for (int j=1; j<=13; j++) {
      if (v[i][j] == 0) {
        cout << suits[i] << " " << j << endl;
      }
    }
  }
}