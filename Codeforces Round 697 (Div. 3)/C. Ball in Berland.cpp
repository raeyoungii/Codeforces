#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int a, b, k; cin >> a >> b >> k;
    vector<int> A(k);
    vector<int> B(k);
    vector<int> cA(a + 1);
    vector<int> cB(b + 1);
    ll ans = 0;
    for (int i = 0; i < k; i++) {
        cin >> A[i];
        cA[A[i]]++;
    }
    for (int i = 0; i < k; i++) {
        cin >> B[i];
        cB[B[i]]++;
    }
    for (int i = 0; i < k; i++) {
        ans += k - cA[A[i]] - cB[B[i]] + 1;
    }
    cout << ans / 2 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}