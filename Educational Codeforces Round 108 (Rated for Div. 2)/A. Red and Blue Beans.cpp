#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

bool solve() {
    ll r, b, d; cin >> r >> b >> d;
    if (r < b && b > r * (d + 1)) return false;
    if (r > b && r > b * (d + 1)) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        cout << (solve() ? "YES" : "NO") << nl;
    }
    return 0;
}
