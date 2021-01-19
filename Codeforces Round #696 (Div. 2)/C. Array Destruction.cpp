#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> v(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<>());
    int tmp = v[0];
    for (int i = 0; i < 2 * n; i++) {
        if (v[i] == 0) continue;
        for (int j = 0; j < 2 * n; j++) {
            if (v[j] == tmp - v[i]) {
                tmp = v[i];
                v[i] = 0;
                v[j] = 0;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
