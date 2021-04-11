#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

char A[401][401];

void solve() {
    int n; cin >> n;
    vector<int> y;
    vector<int> x;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
            if (A[i][j] == '*') {
                y.push_back(i);
                x.push_back(j);
            }
        }
    }
    if (y[0] == y[1]) {
        if (y[0] == n - 1) {
            A[y[0] - 1][x[0]] = '*';
            A[y[0] - 1][x[1]] = '*';
        } else {
            A[y[0] + 1][x[0]] = '*';
            A[y[0] + 1][x[1]] = '*';
        }
    } else if (x[0] == x[1]) {
        if (x[0] == n - 1) {
            A[y[0]][x[0] - 1] = '*';
            A[y[1]][x[0] - 1] = '*';
        } else {
            A[y[0]][x[0] + 1] = '*';
            A[y[1]][x[0] + 1] = '*';
        }
    } else {
        A[y[0]][x[1]] = '*';
        A[y[1]][x[0]] = '*';
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j];
        }
        cout << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
