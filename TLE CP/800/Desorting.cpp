/*
Code by: Satendra Kumar Parteti
GitHub: https://github.com/satendra03
Instagram: https://instagram.com/_satendra_03
Approach: Just check the no with smallest diff and get its index, now the ans will be the no of steps to make the index elemnts bigger from 
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

int getmindiff(const vector<int> &a)
{
    int n = a.size();
    int minDiff = INT_MAX;
    pair<int,int> index = {-1,-1};
    rep(i,0,n){
        rep(j,i+1,n){
            int diff = abs(a[i]-a[j]);
            minDiff = diff < minDiff ? diff : minDiff;
        }
    }
    return minDiff;
}
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
        int n;
        cin >> n;
        vi a(n);
        rep(i, 0, n) cin >> a[i];

        if (!is_sorted(all(a)))
            cout << 0 << endl;
        else {
            int diff = getmindiff(a);
            if(diff < 0) cout << 0 << endl;
            else if (diff == 1) cout << 1 << endl;
            else cout << (diff / 2 ) + 1 << endl;
        }
    }
    return 0;
}
