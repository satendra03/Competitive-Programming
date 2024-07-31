/*
Code by: Satendra Kumar Parteti
GitHub: https://github.com/satendra03
Instagram: https://instagram.com/_satendra_03
Approach: Just implimentation from inside to outside
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
        // vector<vector<char>> target(10, vector<char>(10, '.'));
        char val;
        int ans = 0;

        rep(i, 0, 10){
            rep(j, 0, 10){
                cin>>val;
                if(val == 'X'){
                    if(
                        (i>=4 and 
                        i<=5) and
                        (j>=4 and
                        j<=5)
                    ) ans += 5;
                    else if(
                        (i>=3 and
                        i<=6) and
                        (j>=3 and
                        j<=6)
                    ) ans += 4;
                    else if(
                        (i>=2 and
                        i<=7) and
                        (j>=2 and
                        j<=7)
                    ) ans += 3;
                    else if(
                        (i>=1 and
                        i<=8) and
                        (j>=1 and
                        j<=8)
                    ) ans += 2;
                    else ans += 1;
                }
            }
        }
        cout << ans << endl;
    }
}
