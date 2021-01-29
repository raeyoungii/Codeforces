#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n, k; cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    ll s = v[0];
    ll ans = 0;
    ll tmp;
    for (int i = 1; i < n; i++) {
        if (v[i] * 100 > k * s) {
            tmp = (v[i] * 100 % k == 0 ? v[i] * 100 / k - s : v[i] * 100 / k - s + 1);
            ans += tmp;
            s += tmp;
        }
        s += v[i];
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
