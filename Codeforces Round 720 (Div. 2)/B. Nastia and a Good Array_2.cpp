#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

int A[101010];

void solve() {
    int N; cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];
    printf("%d\n", N / 2);
    for (int i = 1; i < N; i += 2) {
        printf("%d %d %d %d\n", i, i + 1, min(A[i], A[i + 1]), 1000000007);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
