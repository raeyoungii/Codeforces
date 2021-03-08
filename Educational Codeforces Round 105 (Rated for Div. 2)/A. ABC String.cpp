#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    string s; cin >> s;
    char x = s[0], z = s[s.size() - 1];
    if (x == z) cout << "NO\n";
    else {
        int sum1 = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == z) sum1--;
            else sum1++;
        }
        if (sum1 == 0) { cout << "YES\n"; return; }

        int sum2 = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == x) sum2++;
            else sum2--;
            if (sum2 < 0) break;
        }
        if (sum2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
