#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int a; cin >> a; mp[a]++;
    }
    int mx = 0;
    for(auto& iter : mp) mx = max(mx, iter.second);
    cout << max(n % 2, mx - (n - mx)) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
