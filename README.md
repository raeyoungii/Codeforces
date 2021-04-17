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
    vector<int> v(n);
    for (int i = 0; i < n; i++) v[i] = i + 1;
    sort(v.begin(), v.end());
    do {
        for (int i = 0; i < n; i++) {
            cout << v[i] << " \n" [i == n - 1];
        }
    } while (next_permutation(v.begin(), v.end()));
    return 0;
}
```
### 조합
```c++
int main() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    vector<int> chk(n);
    for (int i = 0; i < n; i++) v[i] = i + 1;
    sort(v.begin(), v.end());
    for (int i = 0; i < k; i++) chk[i] = 0;
    for (int i = k; i < n; i++) chk[i] = 1;
    do {
        for (int i = 0; i < n; i++) {
            if (chk[i] == 1) continue;
            cout << v[i] << " ";
        }
        cout << "\n";
    } while (next_permutation(chk.begin(), chk.end()));
    return 0;
}
```

### 벡터의 최대, 최소값
```c++
int mn = *min_element(v.begin(), v.end());
int mx = *max_element(v.begin(), v.end());
```

### lower_bound, upper_bound
```c++
// arr 부터 끝까지 탐색하면서 6 이상의 숫자가 처음으로 나오는 위치의 인덱스 번호를 반환
// 용도: 찾으려는 key 값보다 같거나 큰 숫자가 배열 몇 번째에서 처음 등장하는지 찾기 위함
// 사용 조건: 탐색을 진행할 배열 혹은 벡터는 오름차순 정렬되어 있어야 함
lower_bound(v.begin(), v.end(), 6) - v.begin();

// 처음부터 끝까지 탐색하면서 3을 처음으로 초과하는 숫자가 나오는 위치의 인덱스 번호를 반환
// 용도: 찾으려는 key 값을 초과하는 숫자가 배열 몇 번째에서 처음 등장하는지 찾기 위함
// 사용 조건: 탐색을 진행할 배열 혹은 벡터는 오름차순 정렬되어 있어야 함
upper_bound(v.begin(), v.end(), 3) - v.begin();
```

### 나눗셈 올림 (ceil)
```c++
if (n % k == 0) s = n / k;
else s = n / k + 1;
```
```c++
s = (n + k - 1) / k;
```

### 나머지 올림
```c++
if (n % k == 0) s = k;
else s = n % k;
```
```c++
s = (n - 1) % k + 1; 
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

### goto
```c++
while() {
    if() goto here;
    here:;
}
```

### all_of()
```c++
int A[21];
bool chkEmpty() {
if (all_of(A, A + 21, [](int i){ return i == 0; })) return true;
return false;
}
```

### cin >> A[]

```c++
for (int& x : A) cin >> x;
```