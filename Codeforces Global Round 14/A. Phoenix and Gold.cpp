#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

void solve() {
    int n, x; cin >> n >> x;
    vector<int> v(n);
    int sum = 0;
    for (int& i : v)  { cin >> i; sum += i; }
    sort(v.begin(), v.end());
    if (sum == x) { cout << "NO" << nl; return; }
    cout << "YES" << nl;
    sum = 0;
    int tmp = 0;
    for (int& i : v) {
        sum += i;
        if (sum == x) tmp = i;
        else cout << i << ' ';
    }
    if (tmp) cout << tmp;
    cout << nl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
