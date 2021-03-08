#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int pos[10] = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};

bool chk(int n) {
    if(n == 0 || n == 1 || n == 2 || n == 5 || n == 8) return true;
    return false;
}
void solve() {
    // 0, 1, 2, 5, 8
    int h, m; cin >> h >> m;
    string s; cin >> s;
    int h_1 = s[0] - '0', h_2 = s[1] - '0', m_1 = s[3] - '0', m_2 = s[4] - '0';
    int start_h = 10 * h_1 + h_2;
    int start_m = 10 * m_1 + m_2;
    for (int i = start_h; i < h; i++) {
        for (int j = (i == start_h ? start_m : 0); j < m; j++) {
            if (i != start_h) { m_1 = 0; m_2 = 0; }
            if (chk(h_1) && chk(h_2) && chk(m_1) && chk(m_2)) {
                int rev_h = 10 * pos[m_2] + pos[m_1], rev_m = 10 * pos[h_2] + pos[h_1];
                if (rev_h < h && rev_m < m) {
                    cout << h_1 << h_2 << ":" << m_1 << m_2 << "\n";
                    return;
                }
            }
            if (m_2 < 9) m_2++;
            else { m_1++; m_2 = 0; }
        }
        if (h_2 < 9) h_2++;
        else { h_1++; h_2 = 0; }
    }
    cout << "00:00\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
