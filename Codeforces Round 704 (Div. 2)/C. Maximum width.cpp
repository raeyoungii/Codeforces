#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
char S[202020];
char T[202020];
int L[202020];
int R[202020];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> S[i];
    for (int i = 1; i <= m; i++) cin >> T[i];
    int p = 1;
    for (int i = 1; i <= m; i++) {
        while (S[p] != T[i]) p++;
        L[i] = p++;
    }
    p = n;
    for (int i = m; i >= 1; i--) {
        while (S[p] != T[i]) p--;
        R[i] = p--;
    }
    int ans = 0;
    for (int i = 1; i < m; i++) {
        ans = max(ans, R[i + 1] - L[i]);
    }
    cout << ans << "\n";
    return 0;
}
