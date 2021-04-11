#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const char nl = '\n';

char A[200001];

void solve() {
    int a, b; cin >> a >> b;
    int na = 0, nb = 0;
    for (int i = 0; i < a + b; i++) cin >> A[i];
    for (int i = 0; i < a + b; i++) {
        if (A[i] == '?' && A[a + b - 1 - i] != '?') A[i] = A[a + b - 1 - i];
    }
    for (int i = 0; i < a + b; i++) {
        if (A[i] == '0') na++;
        else if (A[i] == '1') nb++;
        if (A[i] != A[a + b - 1 - i]) {
            cout << "-1\n";
            return;
        }
    }
    if ((a + b) % 2 == 1) {
        if (A[(a + b) / 2] == '?') {
            if (a % 2 == 1) { A[(a + b) / 2] = '0'; na++; }
            else { A[(a + b) / 2] = '1'; nb++; }
        }

    }
    for (int i = 0; i < a + b; i++) {
        if (A[i] == '?') {
            if (na < a) {
                A[i] = '0';
                A[a + b - 1 - i] = '0';
                na += 2;
            } else {
                A[i] = '1';
                A[a + b - 1 - i] = '1';
                nb += 2;
            }
        }
    }
    if (na != a || nb != b) cout << "-1\n";
    else {
        for (int i = 0; i < a + b; i++) {
            cout << A[i] << " \n" [i == a + b - 1];
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
