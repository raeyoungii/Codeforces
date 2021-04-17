#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

void solve() {
    int a, b, c; cin >> a >> b >> c;
    int x = 1, y = 1, z = 1;
    for (int i = 0; i < a - 1; i++) x *= 10;
    for (int i = 0; i < b - 1; i++) y *= 10;
    for (int i = 0; i < c - 1; i++) z *= 10;
    cout << x << " " << (y + z) << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
