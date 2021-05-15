#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

ll U[202020];
ll S[202020];

void solve() {
    int n; cin >> n;
    memset(U, 0, sizeof(U));
    memset(S, 0, sizeof(S));
    vector<ll> v[n + 1], vSum[n + 1];
    for (int i = 1; i <= n; i++) cin >> U[i];
    for (int i = 1; i <= n; i++){
        cin >> S[i];
        v[U[i]].push_back(S[i]);
    }
    for (int i = 1; i <= n; i++) {
        sort(v[i].begin(), v[i].end(), greater<>());
    }
    for (int i = 1; i <= n; i++) {
        ll val = 0;
        for (int j = 0; j < v[i].size(); j++) {
            val += v[i][j];
            vSum[i].push_back(val);
        }
    }
    vector<ll> ans(n);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            int idx = (j + 1) * ((int) v[i].size() / (j + 1)) - 1;
            ans[j] += vSum[i][idx];
        }
    }
    for (ll& x : ans) cout << x << ' ';
    cout << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
