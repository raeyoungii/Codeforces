#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

map<int, bool> mp;

bool solve() {
    int n; cin >> n;
    if (mp[n]) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    for (int i = 1; i * i * 2 <= 1e9; i++) mp[i * i * 2] = true;
    int sum = 0;
    for (int i = 1; sum <= 1e9; i += 2) {
        sum += i * 4;
        mp[sum] = true;
    }
    while(t--) {
        cout << (solve() ? "YES" : "NO") << nl;
    }
    return 0;
}
