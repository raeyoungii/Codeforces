#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';
const int MOD = 1e9 + 7;

ll D[202020][10];

ll f(int op, int first) {
    if (op == 0) return 1;
    ll& ret = D[op][first];
    if (ret != -1) return ret;
    if (first < 9) ret = f(op - 1, first + 1) % MOD;
    else ret = (f(op - 1, 0) + f(op - 1, 1)) % MOD;
    return ret;
}

void solve() {
    int n, m; cin >> n >> m;
    ll ans = 0;
    while(n) {
        ans = (ans + f(m, n % 10)) % MOD;
        n /= 10;
    }
    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    memset(D, -1, sizeof(D));
    while(t--) solve();
    return 0;
}
