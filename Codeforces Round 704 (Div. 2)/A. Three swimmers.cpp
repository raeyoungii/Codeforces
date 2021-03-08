#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll abc[3];

void solve() {
    ll p; cin >> p;
    for (int i = 0; i < 3; i++) cin >> abc[i];
    ll ans = LLONG_MAX;
    for (int i = 0; i < 3; i++) {
        ll tmp = abc[i] * ((p + abc[i] - 1) / abc[i]);
        ans = min(ans, tmp - p);
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
