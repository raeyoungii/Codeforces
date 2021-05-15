#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';
typedef pair<ll, int> pii;

int N, M, X;
int A[101010];
int ans[101010];
priority_queue<pii, vector<pii>, greater<pii> > pq;

void solve() {
    while(pq.size()) pq.pop();
    cin >> N >> M >> X;
    for(int i = 1; i <= N; i++) cin >> A[i];
    for(int i = 1; i <= M; i++) pq.emplace(0, i);
    for(int i = 1; i <= N; i++) {
        pii t = pq.top(); pq.pop();
        ans[i] = t.second;
        t.first += A[i];
        pq.emplace(t);
    }
    cout << "YES" << nl;
    for(int i = 1; i <= N; i++) cout << ans[i] << ' '; cout << nl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
