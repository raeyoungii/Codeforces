#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    ll s = p[0];
    ll ans = 0;
    for (int i = 1; i < n; i++) {
        ans = max(ans, ((ll) p[i] * 100 + k - 1) / k - s);
        s += p[i];
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
