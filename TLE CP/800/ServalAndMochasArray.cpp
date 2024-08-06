/*
Code by: Satendra Kumar Parteti
GitHub: https://github.com/satendra03
Instagram: https://instagram.com/_satendra_03
Approach: Just check if any pair can be generated that satisfies the condition of good so means the gcd must have to be either 1 or 2 , which make other prefix lenth good as now we will calculate the gcd with 1 and 2 with length limits of 3,4,5,6.... that will eventually become 1 or 2 and hence the condition will be true always and will make the array beautiful
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
        int n;
        cin >> n;
        vi a(n);
        rep(i,0,n) cin >> a[i];

        bool found = false;
        rep(i,0,n){
            rep(j,0,n){
                if(i!=j){
                    int num = gcd(a[i], a[j]);
                    if(num <= 2) {
                        found = true;
                        cout << "YES" << endl;
                        break;
                    }
                }
            }
            if(found) break;
        }
        if(!found) cout << "NO" << endl;
    }
    return 0;
}
