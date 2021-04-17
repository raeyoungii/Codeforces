#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

void solve() {
    int n; cin >> n;
    vector<int> A;
    vector<int> B;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        if (k % 2) A.push_back(k);
        else B.push_back(k);
    }
    for (auto& k : A) cout << k << " ";
    for (auto& k : B) cout << k << " ";
    cout << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
