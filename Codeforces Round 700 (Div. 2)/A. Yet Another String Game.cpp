#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
            if (s[i] == 'a') cout << 'b';
            else cout << 'a';
        } else {
            if (s[i] == 'z') cout << 'y';
            else cout << 'z';
        }
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
