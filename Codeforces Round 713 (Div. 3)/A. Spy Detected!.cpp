#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

int A[101];

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    memset(A, 0, sizeof(A));
    int k;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        A[v[i]]++;
    }
    for (int i = 1; i <= 100; i++) {
        if (A[i] > 1) k = i;
    }
    for (int i = 0; i < n; i++) {
        if (v[i] != k) {cout << i + 1 << nl; return; }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
