#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> v(n);
    v[0] = 1;
    for (int i = 1; i < n; i++) {
        if ((s[i - 1] - '0') + v[i - 1] == 1) {
            if (s[i] == '1') v[i] = 1;
            else v[i] = 0;
        }
        else if ((s[i - 1] - '0') + v[i - 1] == 2) {
            if (s[i] == '1') v[i] = 0;
            else v[i] = 1;
        }
        else v[i] = 1;
    }
    for (int i = 0; i < n; i++) {
        cout << v[i];
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
