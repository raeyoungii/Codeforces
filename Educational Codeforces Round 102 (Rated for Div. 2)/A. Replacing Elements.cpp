#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n, d; cin >> n >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    if (a[0] + a[1] <= d || a[n - 1] <= d) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
