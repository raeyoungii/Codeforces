#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

int L[101010];
int R[101010];

void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    memset(L, 0, sizeof(L));
    memset(R, 0, sizeof(R));
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        if (i <= l) L[x]++;
        else R[x]++;
    }

    for (int i = 1; i <= n; i++) {
        while (L[i] && R[i]) {
            L[i]--; R[i]--;
            l--; r--;
        }
    }
    int ans = (l + r) / 2, t = 0;
    if(l > r) {
        for(int i = 1; i <= n; i++) t += L[i] / 2;
        if(t * 2 < l - r) ans += (l - r - t * 2) / 2;
    } else {
        for(int i = 1; i <= n; i++) t += R[i] / 2;
        if(t * 2 < r - l) ans += (r - l - t * 2) / 2;
    }
    cout << ans << nl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
