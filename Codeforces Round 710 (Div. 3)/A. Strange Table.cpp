#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    ll n, m, x; cin >> n >> m >> x;
    ll div = (x - 1) / n, mod = (x - 1) % n;
    cout << m * mod + div + 1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
