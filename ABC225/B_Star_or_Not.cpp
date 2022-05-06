#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> n_edges(N+1);

    for (int i=0; i<N-1; i++) {
        int a, b; cin >> a >> b;
        n_edges[a]++, n_edges[b]++;
    }

    for (int i=1; i<=N; i++) {
        if (n_edges[i] == N-1) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}