#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

void solve() {
    int n, k; cin >> n >> k;
    char a = 'a';
    vector<char> s;
    while (k > 0) {
        for (int j = 0; j < k - 1; j++) {
            s.push_back(a + j);
            s.push_back(a);
        }
        s.push_back(a + k - 1);
        a++; k--;
    }
    for (int i = 0; i < n; i++) {
        cout << s[i % s.size()];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
