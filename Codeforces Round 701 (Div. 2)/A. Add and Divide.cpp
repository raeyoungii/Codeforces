#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int a, b; cin >> a >> b;
    int ans = 1e9;
    for (int i = 0; i < ans; i++) {
        if (b + i == 1) continue;
        int cnt = i;
        int tmp_a = a;
        while (tmp_a > 0) {
            tmp_a /= b + i;
            cnt++;
        }
        ans = min(ans, cnt);
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
