#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> A(n);
    vector<int> B(m);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        B[A[i] % m]++;
    }
    if (m == 1) { cout << "1\n"; return; }
    int cnt = (B[0] == 0 ? 0 : 1);
    for (int i = 1; i < m; i++) {
        if (B[i] != 0 && B[m - i] != 0) {
            if (B[i] > B[m - i]) { B[i] -= B[m - i] + 1; B[m - i] = 0; }
            else if (B[i] < B[m - i]) { B[m - i] -= B[i] + 1; B[i] = 0; }
            else { B[i] = 0; B[m - i] = 0; }
            cnt++;
        }
    }
    for (int i = 1; i < m; i++) {
        while (B[i] > 0) {
            B[i]--;
            cnt++;
        }
    }
    cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
