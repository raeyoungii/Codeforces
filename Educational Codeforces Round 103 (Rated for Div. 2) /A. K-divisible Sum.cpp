#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n, k; cin >> n >> k;
    if (n > k) {
        int k2 = (n % k == 0 ? n / k : n / k + 1);
        k *= k2;
    }
    cout << (k % n == 0 ? k / n : k / n + 1) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
