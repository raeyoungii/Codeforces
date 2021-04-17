#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

int A[303030];
int Q[303030];
int D[51];

void solve() {
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
        if (!D[A[i]]) D[A[i]] = i;
    }
    for (int i = 1; i <= q; i++) cin >> Q[i];
    for (int i = 1; i <= q; i++) {
        cout << D[Q[i]] << " ";
        for (int j = 1; j <= 50; j++) {
            if (j == Q[i]) continue;
            if (D[j] && D[j] < D[Q[i]]) D[j]++;
        }
        D[Q[i]] = 1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
