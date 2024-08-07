/*
Code by: Satendra Kumar Parteti
GitHub: https://github.com/satendra03
Instagram: https://instagram.com/_satendra_03
Approach: 
1. if n-k is 1 means the final string gonna be of length 1 so palindrome
2. now remove the k characters , but only those with freq odd, so that they becam even and will make string palindrome
3. if after removing all freq become even or if there is only one odd is present -  means s is now pallindrome
 else no
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if (n - k == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        vi f(26, 0);
        for (auto c : s)
            f[c - 'a']++;

        rep(i, 0, 26)
        {
            if (k and f[i] % 2)
            {
                f[i]--;
                k--;
            }
        }

        bool alleven = true;
        int oddCount = 0;
        rep(i, 0, 26) if (f[i] % 2)
        {
            alleven = false;
            oddCount++;
        }

        if (alleven or oddCount == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
