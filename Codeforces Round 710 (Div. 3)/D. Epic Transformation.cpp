#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        mp[a]++;
    }
    vector<pair<int, int> > vp;
    for (auto iter = mp.begin(); iter != mp.end(); iter++) {
        vp.emplace_back(iter->second, iter->first);
    }
    sort(vp.begin(), vp.end(), greater<>());
    vector<int> v;
    for (int i = 0; i < (int) vp.size(); i++) {
        for (int j = 0; j < vp[i].first; j++) {
            v.push_back(vp[i].second);
        }
    }
    vector<int> ans(n + 1);
    int temp = 0;
    for (int i = 1; i <= n; i += 2) ans[i] = v[temp++];
    for (int i = 2; i <= n; i += 2) ans[i] = v[temp++];
    int res = 0;
    for (int i = 1; i < n; i += 2) {
        if (ans[i] == ans[i + 1]) res += 2;
    }
    if (n % 2 != 0) res++;
    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
