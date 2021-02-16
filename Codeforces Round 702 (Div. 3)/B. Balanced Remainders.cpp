#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> v(3);
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        v[k % 3]++;

    }
    int c = n / 3;
    int cnt = 0;
    while (!(v[0] == c && v[1] == c && v[2] == c)) {
        for (int i = 0; i < 3; i++) {
            if (v[i] >= c && v[(i + 1) % 3] < c) {
                cnt += c - v[(i + 1) % 3];
                v[i] -= c - v[(i + 1) % 3];
                v[(i + 1) % 3] = c;
            }
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
