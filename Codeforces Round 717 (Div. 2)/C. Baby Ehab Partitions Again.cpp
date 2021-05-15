#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

int n, sum;
int A[110];
int D[110][202020];

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
        sum += A[i];
    }
    for (int i = 1; i <= n; i++) D[1][A[i]] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= 200000; j++) {
            D[i][j] = D[i - 1][j];
            if(j - A[i] >= 0) D[i][j] = max(D[i][j], D[i - 1][j - A[i]]);
        }
    }
    if (sum & 1 || !D[n][sum / 2]) { cout << 0 << nl; return; }
    int p = -1;
    while (true) {
        for (int i = 0; i < n; i++) {
            if (A[i] & 1) { p = i; break; }
        }
        if (p != -1) { cout << 1 << nl << p << nl; break; }
        for (int i = 0; i < n; i++) A[i] >>= 1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
