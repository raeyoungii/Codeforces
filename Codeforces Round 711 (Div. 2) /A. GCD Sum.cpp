#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

void solve() {
    ll n1; cin >> n1;
    ll gcd_n = 1;
    while (gcd_n == 1) {
        ll tmp = n1, n2 = 0;
        while (tmp > 0) {
            n2 += tmp % 10;
            tmp /= 10;
        }
        gcd_n = gcd(n1, n2);
        if (gcd_n == 1) n1++;
    }
    cout << n1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
