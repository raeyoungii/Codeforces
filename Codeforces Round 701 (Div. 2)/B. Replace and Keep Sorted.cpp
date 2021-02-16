#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int a[100001];
int n, q, k;

void solve() {
    int l, r; cin >> l >> r;
    int n_zeros = r - l + 1;
    int n_ones = a[l] - 1 + k - a[r];
    int n_twos = k - n_zeros - n_ones;
    cout << n_ones + n_twos * 2 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> q >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    while (q--) solve();
    return 0;
}
