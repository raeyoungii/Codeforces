#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int A[21];

bool chkEmpty() {
    if (all_of(A, A + 21, [](int i){ return i == 0; })) return true;
    return false;
}

void solve() {
    memset(A, 0, sizeof(A));
    int n, W; cin >> n >> W;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        int tmp = 0;
        while (a > 0) { tmp++; a /= 2; }
        A[tmp]++;
    }
    int cnt = 0;
    while (!chkEmpty()) {
        int tmp = W;
        for (int i = 21; i >= 1; i--) {
            while (A[i] > 0 && tmp > 0) {
                int k = 1;
                for (int j = 0; j < i - 1; j++) k *= 2;
                if (tmp - k < 0) break;
                tmp -= k;
                A[i]--;
            }
        }
        cnt++;
    }
    cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
