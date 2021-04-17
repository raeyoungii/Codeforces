#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';
const int MOD = 1e9 + 7;

int A[200001];

void solve() {
    int n; cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) { cin >> A[i]; mp[A[i]]++; }
    vector<int> v;
    for (auto& it : mp) {
        if (it.second > 1) v.push_back(it.first);
    }
    if (v.empty()) { cout << "0\n"; return; }
    int mn = *min_element(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if ((mn & A[i]) != mn) { cout << "0\n"; return; }
    }
    ll cnt = 1;
    int tmp = n - 2, k = n - mp[mn];
    while(k--) {
        cnt = (cnt * tmp) % MOD;
        tmp--;
    }
    for (int i = 1; i <= mp[mn]; i++) {
        cnt = (cnt * i) % MOD;
    }
    cout << cnt << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
