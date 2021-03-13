#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    if(k == 0) { cout << n << "\n"; return; }
    sort(v.begin(), v.end());
    int mx = *max_element(v.begin(), v.end());
    int mex = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] != i) { mex = i; break; }
    }
    if (mex == -1) { cout << n + k << "\n"; return; }
    for (int i = 0; i < n; i++) {
        if (v[i] == (mx + mex + 1) / 2) { cout << n << "\n"; return; }
    }
    cout << n + 1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
