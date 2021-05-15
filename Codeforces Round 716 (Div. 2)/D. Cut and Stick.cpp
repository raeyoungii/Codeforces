#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

int N, Q;
vector<int> V[303030];
int A[303030];

int cnt(int k, int l, int r) {
    return upper_bound(V[k].begin(), V[k].end(), r) - lower_bound(V[k].begin(), V[k].end(), l);
}

struct SegTree {
    int T[4 * 303030]{};
    vector<int> v;

    void init(int idx, int s, int e) {
        if(s == e) {
            T[idx] = A[s]; return;
        }

        int m = (s + e) >> 1;
        init(idx << 1, s, m);
        init(idx << 1 | 1, m + 1, e);

        int cl = T[idx << 1], cr = T[idx << 1 | 1];
        if(cl && cnt(cl, s, e) > (e - s + 1) / 2) T[idx] = cl;
        else if(cr && cnt(cr, s, e) > (e - s + 1) / 2) T[idx] = cr;
    }

    void get(int idx, int s, int e, int p, int q) {
        if(q < p || q < s || e < p) return;
        if(p <= s && e <= q) { v.push_back(T[idx]); return; }
        int m = (s + e) >> 1;
        get(idx << 1, s, m, p, q);
        get(idx << 1 | 1, m + 1, e, p, q);
    }

    int query(int p, int q) {
        v.clear();
        get(1, 1, N, p, q);
        for(int i : v) {
            if(!i) continue;
            if(cnt(i, p, q) > (q - p) / 2 + 1) return i;
        }
        return 0;
    }
}seg;

void solve() {
    int l, r; cin >> l >> r;
    int t = seg.query(l, r);
    if(!t) { cout << "1" << nl; return; }
    int a = cnt(t, l, r);
    int b = (r - l + 1) - a;
    cout << max(1, a - b) << nl;
}

int main() {
    cin >> N >> Q;
    for(int i = 1; i <= N; i++) {
        cin >> A[i];
        V[A[i]].push_back(i);
    }
    seg.init(1, 1, N);
    while(Q--) solve();
    return 0;
}
