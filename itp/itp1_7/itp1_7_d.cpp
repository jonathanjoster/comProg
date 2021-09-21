#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m, l; cin >> n >> m >> l;

  vector<vector<long long>> A(n, vector<long long>(m));
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cin >> A[i][j];
    }
  }

  vector<vector<long long>> B(m, vector<long long>(l));
  for (int i=0; i<m; i++) {
    for (int j=0; j<l; j++) {
      cin >> B[i][j];
    }
  }

  vector<vector<long long>> C(n, vector<long long>(l));
  for (int i=0; i<n; i++) {
    for (int j=0; j<l; j++) {
      for (int k=0; k<m; k++) {
        C[i][j] += A[i][k]*B[k][j];
      }
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<l; j++) {
      if (j != l-1) {
        cout << C[i][j] << " ";
      } else {
        cout << C[i][j] << endl;
      }
    }
  }
}