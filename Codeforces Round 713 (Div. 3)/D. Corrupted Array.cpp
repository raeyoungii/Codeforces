#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

void solve() {
    int n; cin >> n;
    vector<ll> B(n + 2);
    for (int i = 0; i < n + 2; i++) cin >> B[i];
    sort(B.begin(), B.end());
    if (n == 1) {
        if( B[0] == B[1] || B[0] == B[2]) cout << B[0] << nl;
        else if (B[1] == B[2]) cout << B[1] << nl;
        else cout << "-1" << nl;
        return;
    }
    ll sum = 0;
    for (int i = 0; i < n + 1; i++) sum += B[i];
    int idx = -1;
    for (int i = 0; i < n + 1; i++) {
        if (sum - B[i] == B[n] || sum - B[i] == B[n + 1]) { idx = i; break; }
    }
    if (idx == -1) { cout << "-1" << nl; return; }
    for (int i = 0; i < n + 1; i++) {
        if (i == idx) continue;
        cout << B[i] << " ";
    }
    cout << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}