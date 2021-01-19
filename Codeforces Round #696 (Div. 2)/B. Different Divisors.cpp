#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int MAX = 1e5;
vector<int> v;
bool arr[MAX];

void getChe() {
    for (int i = 2; i <= MAX; i++) {
        if (arr[i]) continue;
        for (int j = i + i; j <= MAX; j += i) {
            arr[j] = true;
        }
    }
    for (int i = 2; i <= MAX; i++) {
        if (!arr[i]) v.push_back(i);
    }
}

void solve() {
    int n; cin >> n;
    int tmp1 = 0;
    int tmp2 = 0;
    for (int i = 0; i < v.size(); i++) {
        if(tmp1 == 0) {
            if (v[i] >= n + 1) tmp1 = v[i];
        }
        if (v[i] >= tmp1 + n) {
            tmp2 = v[i];
            break;
        }
    }
    cout << tmp1 * tmp2 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    getChe();
    while (t--) solve();
    return 0;
}
