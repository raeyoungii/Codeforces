# Snippets
```c++
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; } // 최대공약수
ll lcm(ll a, ll b) { return a * b / gcd(a, b); } // 최소공배수
sort(a.begin(), a.end(), greater<>()); // 내림차순 정렬
```

###순열
```c++
int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) arr[i] = i + 1;
    sort(arr.begin(), arr.end());
    do {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " \n" [i == n - 1];
        }
    }
    while (next_permutation(arr.begin(), arr.end()));
    return 0;
}
```
###조합
```c++
int main() {
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    vector<int> chk(n);
    for (int i = 0; i < n; i++) arr[i] = i + 1;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < k; i++) chk[i] = 0;
    for (int i = k; i < n; i++) chk[i] = 1;
    do {
        for (int i = 0; i < n; i++) {
            if (chk[i] == 1) continue;
            cout << arr[i] << " ";
        }
        cout << "\n";
    } while (next_permutation(chk.begin(), chk.end()));
    return 0;
}
```