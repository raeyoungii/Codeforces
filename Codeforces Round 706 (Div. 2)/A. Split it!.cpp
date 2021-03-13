#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    bool flag = false;
    if (k == 0) { cout << "YES\n"; return; }
    for (int i = 0; i < k; i++) {
        if (s[i] == s[n - i - 1]) continue;
        flag = true;
    }
    if (!flag && n > 2 * k) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
