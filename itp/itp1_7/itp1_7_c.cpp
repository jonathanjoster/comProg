#include <iostream>
#include <vector>
using namespace std;

int main() {
  int r, c; cin >> r >> c;
  vector<vector<int>> table(r+1, vector<int>(c+1));

  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
      cin >> table[i][j];
      table[i][c] += table[i][j];
      table[r][j] += table[i][j];
    }
    table[r][c] += table[i][c];
  }

  for (int i=0; i<=r; i++) {
    for (int j=0; j<=c; j++) {
      if (j != c) {
        cout << table[i][j] << " ";
      } else {
        cout << table[i][j] << endl;
      }
    }
  }
}