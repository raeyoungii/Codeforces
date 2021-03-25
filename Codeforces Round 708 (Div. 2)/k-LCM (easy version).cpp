#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n, k; cin >> n >> k;
    if (n % 4 == 0) cout << n / 2 << " " << n / 4 << " " << n / 4 << "\n";
    else if (n % 2 == 0) cout << n / 2 - 1 << " " << n / 2 - 1 << " " << 2 << "\n";
    else cout << n / 2 << " " << n / 2 << " " << 1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
