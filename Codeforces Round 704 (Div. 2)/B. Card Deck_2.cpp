#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int A[101010];
int pos[101010];

void solve() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
        pos[A[i]] = i;
    }
    int p = n, l = n + 1;
    while (p >= 1) {
        if (pos[p] >= l) { p--; continue; }
        for (int i = pos[p]; i < l; i++) cout << A[i] << " ";
        l = pos[p];
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
