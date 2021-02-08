# Snippets
### gcd, lcm
```c++
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; } // 최대공약수
ll lcm(ll a, ll b) { return a * b / gcd(a, b); } // 최소공배수
```
### 정렬
```c++
sort(a.begin(), a.end(), greater<>()); // 내림차순 정렬

bool compare(int a, int b) { return a > b; }
sort(v.begin(), v.end(), compare); // 사용자 정의 정렬
```

### 순열
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
    } while (next_permutation(arr.begin(), arr.end()));
    return 0;
}
```
### 조합
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
### 벡터의 최대, 최소값
```c++
int min = *min_element(v.begin(), v.end());
int max = *max_element(v.begin(), v.end());
```
### 나눗셈 올림 (ceil)
```c++
int s;
if (n % k == 0) s = n / k;
else s = n / k + 1;
```
```c++
int s = (n + k - 1) / k;
```
### 에라토스테네스의 체
```c++
vector<int> v;
void eratos(int n) {
    if (n <= 1) return;
    bool sieve[n + 1];
    for (int i = 2; i <= n; i++) sieve[i] = true;
    for (int i = 2; i * i <= n; i++) {
        if (sieve[i]) {
            for (int j = i * i; j <= n; j += i) {
                sieve[j] = false;
            }
        }
    }
    // 이후의 작업...
    for (int i = 2; i <= n; i++) {
        if (sieve[i]) v.push_back(i);
    }
}
```