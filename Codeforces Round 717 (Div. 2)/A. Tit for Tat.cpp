#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

int A[110];

void solve() {
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> A[i];
    int p = 1;
    for (int i = 0; i <= k; i++) {
        while (p <= n && !A[p]) p++;
        if (p >= n) break;
        A[p]--; A[n]++;
    }
    for (int i = 1; i <= n; i++) {
        cout << A[i] << " \n" [i == n];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
