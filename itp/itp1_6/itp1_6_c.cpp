#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector<vector<int>>> house(4, vector<vector<int>>(3, vector<int>(10)));
  int n; cin >> n;

  while (n--) {
    int b, f, r, v; cin >> b >> f >> r >> v;
    house[b-1][f-1][r-1] += v;
  }

  for (int i=0; i<4; i++) {
    if (i) { cout << "####################" << endl; }
    for (int j=0; j<3; j++) {
      for (int k=0; k<10; k++) {
        cout << " " << house[i][j][k];
      }
      cout << endl;
    }
  }
}