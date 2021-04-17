#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';
const int MOD = 1e9 + 7;

ll D[202020][10];

void solve() {
    int n, m; cin >> n >> m;
    ll ans = 0;
    while(n) {
        ans = (ans + D[m][n % 10]) % MOD;
        n /= 10;
    }
    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i = 0; i <= 9; i++) D[0][i] = 1;
    for(int i = 1; i <= 200000; i++) {
        for(int j = 0; j < 9; j++) {
            D[i][j] = D[i - 1][j + 1];
        }
        D[i][9] = (D[i - 1][0] + D[i - 1][1]) % MOD;
    }
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
