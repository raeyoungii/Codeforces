#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


void solve() {
    ll x; cin >> x;
    ll l = 1, r = 10000;
    bool pos = false;
    while (l <= r) {
        if (l * l * l + r * r * r == x) {
            pos = true;
            break;
        }
        else if (l * l * l + r * r * r < x) l++;
        else r--;
    }
    cout << (pos ? "YES" : "NO") << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
