#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int A, B, n; cin >> A >> B >> n; // attack power, health value
    vector<pair<int, int>> ab(n);
    for (int i = 0; i < n; i++) {
        cin >> ab[i].first; // attack power
    }
    for (int i = 0; i < n; i++) {
        cin >> ab[i].second; // health value
    }
    sort(ab.begin(), ab.end());
    for (int i = 0; i < n; i++) {
        int m = min((ab[i].second + A - 1) / A, (B + ab[i].first - 1) / ab[i].first);
        ab[i].second -= A * m;
        B -= ab[i].first * m;
    }
    if (ab[n - 1].second <= 0) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
