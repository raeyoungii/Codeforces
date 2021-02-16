#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int mn = *min_element(v.begin(), v.end());
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (mn < v[i]) cnt++;
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
