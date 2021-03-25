#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int begin = 0, end = 0;
    for (int i = 0; i < (int) s.size(); i++) {
        if (s[i] == '*') { begin = i; break; }
    }
    for (int i = (int) s.size(); i >= 0; i--) {
        if (s[i] == '*') { end = i; break; }
    }
    if (begin == end) { cout << "1\n"; return; }
    int cnt = 1;
    s[begin] = 'x';
    for (int i = 0; i < (int) s.size(); i++) {
        if (s[i] == 'x') {
            for (int j = k; j >= 1; j--) {
                if (i + j < (int) s.size() && s[i + j] == '*') {
                    s[i + j] = 'x';
                    cnt++;
                    i += j - 1;
                    break;
                }
            }
        }
    }
    if (s[end] == '*') cnt++;
    cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
