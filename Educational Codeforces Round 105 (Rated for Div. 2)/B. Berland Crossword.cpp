#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int n;
int urdl[4];

bool chk(int x) {
    if (0 <= x && x <= n - 2) return true;
    else return false;
}

void solve() {
    cin >> n;
    for (int i = 0; i < 4; i++) {
        cin >> urdl[i];
    }
    bool flag = false;
    // 0
    if (chk(urdl[0]) && chk(urdl[1]) && chk(urdl[2]) && chk(urdl[3])) flag = true;
    // 1
    for (int i = 0; i < 4; i++) {
        if (chk(urdl[(0 + i) % 4] - 1) && chk(urdl[(1 + i) % 4] - 1) && chk(urdl[(2 + i) % 4]) && chk(urdl[(3 + i) % 4])) flag = true;
    }
    // 2 - 1
    if (chk(urdl[0] - 1) && chk(urdl[1] - 1) && chk(urdl[2] - 1) && chk(urdl[3]) - 1) flag = true;
    // 2 - 2
    for (int i = 0; i < 4; i++) {
        if (chk(urdl[(0 + i) % 4] - 1) && chk(urdl[(1 + i) % 4] - 2) && chk(urdl[(2 + i) % 4] - 1) && chk(urdl[(3 + i) % 4])) flag = true;
    }
    // 3
    for (int i = 0; i < 4; i++) {
        if (chk(urdl[(0 + i) % 4] - 1) && chk(urdl[(1 + i) % 4] - 2) && chk(urdl[(2 + i) % 4] - 2) && chk(urdl[(3 + i) % 4] - 1)) flag = true;
    }
    // 4
    if (chk(urdl[0] - 2) && chk(urdl[1] - 2) && chk(urdl[2] - 2) && chk(urdl[3] - 2)) flag = true;
    if (flag) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
