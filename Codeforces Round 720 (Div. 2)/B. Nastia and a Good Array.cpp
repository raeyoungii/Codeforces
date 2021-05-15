#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a * b / gcd(a, b); }

int A[101010];

void solve() {
    int N; cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];
    if (N == 1) { cout << "0\n"; return; }
    vector<vector<int>> vv;
    if (N == 2) {
        if (gcd(A[1], A[0]) != 1) {
            A[1] = min(A[1], A[0]);
            A[0] = A[1];
            while (gcd(A[1], A[0]) != 1) A[0]++;
            vv.push_back({1, 2, A[0], A[1]});
        }
        cout << vv.size() << nl;
        for (auto& v : vv) {
            for (int i = 0; i < 4; i++) {
                cout << v[i] << ' ';
            }
        }
        cout << nl;
        return;
    }
    for (int i = 1; i < N - 1; i++) {
        if (gcd(A[i], A[i - 1]) != 1) {
            A[N - 1] = min(A[i], A[N - 1]);
            A[i] = A[N - 1];
            while (gcd(A[i], A[i - 1]) != 1) A[i]++;
            vv.push_back({i + 1, N, A[i], A[N - 1]});
        }
    }
    if (gcd(A[N - 1], A[N - 2]) != 1) {
        A[N - 1] = min(A[N - 1], A[N - 2]);
        A[N - 2] = A[N - 1];
        while (gcd(A[N - 2], A[N - 3]) != 1 || gcd(A[N - 1], A[N - 2]) != 1) A[N - 2]++;
        vv.push_back({N - 1, N, A[N - 2], A[N - 1]});
    }
    cout << vv.size() << nl;
    for (auto& v : vv) {
        for (int i = 0; i < 4; i++) {
            cout << v[i] << ' ';
        }
    }
    cout << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
