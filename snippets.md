# Snippets
`ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }`  
`ll lcm(ll a, ll b) { return a * b / gcd(a, b); }`