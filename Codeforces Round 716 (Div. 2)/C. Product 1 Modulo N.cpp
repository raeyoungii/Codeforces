#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a * b / gcd(a, b); }

void solve() {
    int n; cin >> n;
    vector<ll> a;
    ll k = 1;
    for (ll i = 1; i < n; i++) {
        if (gcd(n, i) != 1) continue;
        k = (k * i) % n;
        a.push_back(i);
    }
    if (k != 1) a.pop_back();
    cout << a.size() << nl;
    for (ll& x : a) cout << x << ' ';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
