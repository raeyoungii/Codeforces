#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int a[100];
int d[100];

void dfs(int start, int end, int depth) {
    if (start > end) return;
    int mx = 0, idx = 0;
    for (int i = start; i <= end; i++) {
        if (mx < a[i]) mx = a[i], idx = i;
    }
    d[idx] = depth;
    dfs(start, idx - 1, depth + 1);
    dfs(idx + 1, end, depth + 1);
}

void solve() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    dfs(0, n - 1, 0);
    for (int i = 0; i < n; i++) {
        cout << d[i] << " \n" [i == n - 1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
