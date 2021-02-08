#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    string s; cin >> s;
    bool flag = false;
    for (char i : s) {
        if (!flag) {
            if (i == 'a') cout << 'b';
            else cout << 'a';
        } else {
            if (i == 'z') cout << 'y';
            else cout << 'z';
        }
        flag = !flag;
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
