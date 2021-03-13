#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

void solve() {
    int n; cin >> n;
    vector<ll> m;
    vector<ll> d;
    for (int i = 0; i < 2 * n; i++) {
        int x, y; cin >> x >> y;
        if (x == 0) m.push_back(abs(y));
        else d.push_back(abs(x));
    }
    sort(m.begin(), m.end());
    sort(d.begin(), d.end());
    ld ans = 0;
    for (int i = 0; i < n; i++) ans += sqrt(m[i] * m[i] + d[i] * d[i]);
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed; cout.precision(10);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
