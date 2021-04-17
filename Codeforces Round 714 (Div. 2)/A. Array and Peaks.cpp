#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

int A[110];

void solve() {
    int n, k; cin >> n >> k;
    memset(A, 0, sizeof(A));
    if ((n - 1) / 2 < k) { cout << "-1\n"; return; }
    int idx = 1, tmp = n;
    while (k--) {
        A[idx] = tmp--;
        idx += 2;
    }
    int p = 1;
    for (int i = 0; i < n; i++) {
        if (A[i] == 0) A[i] = p++;
    }
    for (int i = 0; i < n; i++) {
        cout << A[i] << " \n" [i == n - 1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
