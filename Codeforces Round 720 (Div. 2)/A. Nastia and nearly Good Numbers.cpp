#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

void solve() {
    ll a, b; cin >> a >> b;
    if (b == 1) { cout << "NO" << nl; return; }
    cout << "YES" << nl;
    if (b == 2) cout << a << ' ' << a * 3 << ' ' << a * 4 << nl;
    else cout << a << ' ' << a * (b - 1) << ' ' << a * b << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
