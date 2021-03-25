#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    string a; cin >> a;
    string b; cin >> b;
    int mx = 0;
    int aSize = (int) a.size();
    int bSize = (int) b.size();
    for (int i = 0; i < aSize; i++) {
        for (int j = 0; j < bSize; j++) {
            if (a[i] == b[j]) {
                int temp = 1;
                for (int k = j + 1; k < bSize; k++) {
                    if (a[i + k - j] == b[k]) temp++;
                    else break;
                }
                mx = max(mx, temp);
            }
        }
    }
    int ans = aSize + bSize - mx - mx;
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
