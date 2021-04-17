#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int m = 0, t = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'T') t++;
        else m++;
    }
    if (t != m * 2) { cout << "NO\n"; return; }
    deque<char> dq1;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'T') dq1.push_back('T');
        else {
            if (dq1.empty()) {cout << "NO\n"; return; }
            dq1.pop_back();
        }
    }
    deque<char> dq2;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'T') dq2.push_back('T');
        else {
            if (dq2.empty()) {cout << "NO\n"; return; }
            dq2.pop_back();
        }
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
