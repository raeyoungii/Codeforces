#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a * b / gcd(a, b); }

void solve() {
    string s, t; cin >> s >> t;
    ll st = lcm((int) s.size(), (int) t.size());
    string s1, t1;
    for (int i = 0; i < st / (int) s.size(); i++) s1 += s;
    for (int i = 0; i < st / (int) t.size(); i++) t1 += t;
    if (s1 == t1) cout << s1 << "\n";
    else cout << "-1\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
