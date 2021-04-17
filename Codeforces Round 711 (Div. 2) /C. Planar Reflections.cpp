#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';
const int MOD = 1e9 + 7;

int N, K;
int cache[1001][1001];

int f(int l, int k) {
    if(l == N || k == 1) return 1;
    int& ret = cache[l][k];
    if(ret != -1) return ret;
    return ret = (f(N - l, k - 1) + f(l + 1, k)) % MOD;
}
void solve() {
    cin >> N >> K;
    memset(dp, -1, sizeof(dp));
    cout << f(0, K) << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
