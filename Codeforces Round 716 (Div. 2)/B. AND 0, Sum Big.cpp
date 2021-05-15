#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';
const ll MOD = 1e9 + 7;

void solve() {
    int n, k; cin >> n >> k;
    ll ans = 0;
    for (int b = 0; b < pow(2, k); b++) {
        ll a = 1;
        ll tmp = b, one = 0;
        while (tmp > 0) {
            if (tmp % 2) one++;
            tmp /= 2;
        }
        for (int i = 0; i < one; i++) a = (a * (n - 1)) % MOD;
        ans = (ans + a) % MOD;
    }
    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
