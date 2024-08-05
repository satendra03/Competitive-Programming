/*
Code by: Satendra Kumar Parteti
GitHub: https://github.com/satendra03
Instagram: https://instagram.com/_satendra_03
Approach: if n is even, then we can just use 2 to make it, else if the number is odd and if n-k is divisible of 2 then it can also be 2

how?
2x + ky = n
if n is even then only 2 can be uses

if n is odd, then it means it all depends on k and y as 2x will always be even, now
first k

1. if k is even, then n must be even n, then YES (already handled by case 1)
else NO

2. if k is odd:
    1. if y is even then n must be even, else NO
    2. if y is odd, then we can subtract k from both side if the eq(1) now y is even so the new obtained n ie (n-k) now must have become even
    else NO

*/

#include <bits/stdc++.h>
using namespace std;

// Typedefs for convenience
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;

// Macros for convenience
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()
#define F first
#define S second
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i > b; --i)
#define endl '\n'

// Constants
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

// Utility functions
template <typename T>
void print_vector(const vector<T> &v) {
    for (const auto &elem : v)
        cout << elem << " ";
    cout << endl;
}

template <typename T>
void print_matrix(const vector<vector<T>> &mat) {
    for (const auto &row : mat) {
        for (const auto &elem : row)
            cout << elem << " ";
        cout << endl;
    }
}

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// Main function
int main() {
    // Fast Input and Output
    FAST_IO;
    // The VS Code Setup
#ifndef ONLINE_JUDGE
    freopen("z_input.txt", "r", stdin);
    freopen("z_output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        if(n%2 == 0) cout << "YES" << endl;
        else if((n-k)%2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
