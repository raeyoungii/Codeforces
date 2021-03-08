#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> v;
    vector<vector<int>> vv(n, vector<int> (1, 0));
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }
    int idx = 0;
    vv[idx][0] = v[0];
    for (int i = 1; i < n; i++) {
        if (vv[idx][0] < v[i]) {
            vv[++idx][0] = v[i];
        }
        else vv[idx].push_back(v[i]);
    }
    for (int i = (int) vv.size() - 1; i >= 0; i--) {
        if (vv[i][0] == 0) continue;
        for (int j = 0; j < vv[i].size(); j++) {
            cout << vv[i][j] << " ";
        }
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
