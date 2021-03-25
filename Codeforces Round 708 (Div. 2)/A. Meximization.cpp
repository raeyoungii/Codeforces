#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int A[102];
int vst[102];

void solve() {
    int n; cin >> n;
    memset(vst, 0, sizeof(vst));
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        vst[A[i]]++;
    }
    for (int i = 0; i < 101; i++) {
        if (vst[i] > 0) {
            cout << i << " ";
            vst[i]--;
        }
    }
    for (int i = 0; i < 101; i++) {
        while (vst[i] > 0) {
            cout << i << " ";
            vst[i]--;
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
