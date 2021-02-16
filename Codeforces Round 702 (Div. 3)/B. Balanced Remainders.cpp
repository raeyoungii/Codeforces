#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    int c0 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        if (k % 3 == 0) c0++;
        else if (k % 3 == 1) c1++;
        else c2++;
    }
    int c = n / 3;
    int cnt = 0;
    while (!(c0 == c && c1 == c && c2 == c)) {
        if (c0 >= c && c1 < c) {
            cnt += c - c1;
            c0 -= c - c1, c1 = c;
        }
        if (c1 >= c && c2 < c) {
            cnt += c - c2;
            c1 -= c - c2, c2 = c;
        }
        if (c2 >= c && c0 < c) {
            cnt += c - c0;
            c2 -= c - c0, c0 = c;
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
