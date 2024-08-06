/*
Code by: Satendra Kumar Parteti
GitHub: https://github.com/satendra03
Instagram: https://instagram.com/_satendra_03
Approach: Implemented the code (see ref)
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
#define FAST_IO              \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
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
void print_vector(const vector<T> &v)
{
    for (const auto &elem : v)
        cout << elem << " ";
    cout << endl;
}

template <typename T>
void print_matrix(const vector<vector<T>> &mat)
{
    for (const auto &row : mat)
    {
        for (const auto &elem : row)
            cout << elem << " ";
        cout << endl;
    }
}

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// Main function
int main()
{
    // Fast Input and Output
    FAST_IO;
    // The VS Code Setup
#ifndef ONLINE_JUDGE
    freopen("z_input.txt", "r", stdin);
    freopen("z_output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        // we cant use 1 and we can use numbers only upto 1
        if(x==1 and k==1) cout << "NO" << endl;
        // we have to make an odd number with only 2 as we cant use 1
        else if(x==1 and k==2 and n%2) cout << "NO" << endl;
        else if (x!=1) {
            // we can use 1
            cout << "YES" << endl;
            cout << n << endl;
            rep(i,1,n+1) cout << 1 << " ";
            cout << endl;
        }
        else {
            // we can't use 1
            if(n%2){
                // means the number is odd so we can create this by 2 and 3
                int num = (n-1)/2;
                cout << "YES" << endl;
                cout << num << endl;
                rep(i,1,num) cout << 2 << " ";
                cout << 3 << endl;
            } else {
                // number is even
                int num = n/2;
                cout << "YES" << endl;
                cout << num << endl;
                rep(i,1,num+1) cout << 2 << " ";
                cout << endl;
            }
        }
    }
    return 0;
}
