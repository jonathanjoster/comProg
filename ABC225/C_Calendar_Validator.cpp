#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector<vector<int> > B(N, vector<int>(M));
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> B[i][j];
        }
    }

    bool ok = true;
    if (N == 1) {
        for (int j=0; j<M-1; j++) {
            if (B[0][j]+1 != B[0][j+1]) {
                cout << "No" << endl;
                return 0;
            }
        }
    } else if (M == 1) {
        for (int i=0; i<N-1; i++) {
            if (B[i][0]+7 != B[i+1][0]) {
                cout << "No" << endl;
                return 0;
            }
        }
    } else {
        for (int i=0; i<N-1; i++) {
            for (int j=0; j<M-1; j++) {
                if ((B[i][j]+1 != B[i][j+1]) || (B[i][j]+7 != B[i+1][j])) {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
        if (B[N-1][M-2]+1 != B[N-1][M-1]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}