#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

ll dp[2020][2020];

void solve() {
    int n; cin >> n;
    vector<ll> S(n);
    for (int i = 0; i < n; i++) cin >> S[i];
    sort(S.begin(), S.end());
    for (int d = 1; d < n; d++) {
        for (int l = 0; l < n; l++) {
            ll r = l + d;
            if (r >= n) continue;
            dp[l][r] = min(dp[l + 1][r], dp[l][r - 1]) + S[r] - S[l];
        }
    }
    cout << dp[0][n - 1] << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
