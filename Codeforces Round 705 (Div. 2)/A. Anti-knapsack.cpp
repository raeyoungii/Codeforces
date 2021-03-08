#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n, k; cin >> n >> k;
    cout << n - (k + 1) / 2 << "\n";
    for (int i = k + 1; i <= n; i++) cout << i << " ";
    for (int i = (k + 1) / 2; i < k; i++) cout << i << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
