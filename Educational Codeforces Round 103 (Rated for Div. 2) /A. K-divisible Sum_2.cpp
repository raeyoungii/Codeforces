#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    ll n, k; cin >> n >> k;
    ll s = (n + k - 1) / k * k;
    cout << (s + n - 1) / n << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
