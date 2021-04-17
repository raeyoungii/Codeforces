#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

int R[51];

void solve() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> R[i];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (R[i] == 1 || R[i] == 3) cnt++;
    }
    cout << cnt << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
