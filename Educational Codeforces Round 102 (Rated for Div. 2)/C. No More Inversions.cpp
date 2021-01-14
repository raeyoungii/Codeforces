#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n, k; cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        if (i < k - (n - k)) cout << i;
        else cout << k + (k - (n - k) - i);
        cout << " \n" [i == k];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
