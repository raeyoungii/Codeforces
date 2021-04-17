#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

int n;
int S[2020];
ll D[2020][2020];

ll f(int l, int r) {
    if (l == r) return 0;
    ll& ret = D[l][r];
    if (ret != -1) return ret;
    return ret = min(f(l + 1, r) , f(l, r - 1)) + S[r] - S[l];
}

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> S[i];
    memset(D, -1, sizeof(D));
    sort(S, S + n);
    cout << f(0, n - 1) << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
