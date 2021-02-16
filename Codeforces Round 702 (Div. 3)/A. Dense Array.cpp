#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        int mx = max(v[i], v[i + 1]);
        int mn = min(v[i], v[i + 1]);
        while ( (mx + mn - 1) / mn > 2) {
            mn = mn * 2;
            cnt++;
        }
    }
    cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
