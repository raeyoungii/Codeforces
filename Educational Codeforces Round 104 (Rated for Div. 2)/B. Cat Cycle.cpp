#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    ll n, k; cin >> n >> k;
    if (n % 2 == 0) {
        cout << (k - 1) % n + 1 << "\n";
    } else {
        ll div, mod;
        k = (k - 1) % (n * (n / 2)) + 1;
        div = (k + n - 2) / (n - 1) - 1;
        mod = (k - 1) % (n - 1) + 1;
        if (mod <= n / 2) cout << (div + mod) % n << "\n";
        else cout << (div + mod) % n + 1 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
