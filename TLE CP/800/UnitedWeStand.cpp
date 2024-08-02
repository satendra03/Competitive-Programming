/*
Code by: Satendra Kumar Parteti
GitHub: https://github.com/satendra03
Instagram: https://instagram.com/_satendra_03
Approach: So basically this is kind of brute force, first sort the array, then check from the left side is is there is any number which cant divide its right side numbers, is there is any, push it in c and the rest in b, as the smaller number wont divide, and for bigger, we just checked

new approach, let just the biggest number be in c as it will never divide the smaller ones
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
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
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

    // while (t--)
    // {
    //     int n;
    //     cin >> n;
    //     vi a(n);
    //     rep(i, 0, n) cin >> a[i];
    //     sort(all(a));
    //     vi b, c;
    //     int validNum;
    //     rep(i, 0, n)
    //     {
    //         int num = a[i];
    //         bool found = false;
    //         rep(j, i + 1, n)
    //         {
    //             if (a[j] == num)
    //                 continue;
    //             if (a[j] % num == 0)
    //             {
    //                 found = false;
    //                 break;
    //             }
    //             found = true;
    //         }
    //         if (found)
    //         {
    //             validNum = num;
    //             break;
    //         }
    //     }
    //     rep(i, 0, n)
    //     {
    //         if (a[i] == validNum)
    //             c.pb(a[i]);
    //         else
    //             b.pb(a[i]);
    //     }
    //     if (b.size() and c.size())
    //     {
    //         cout << b.size() << " " << c.size() << endl;
    //         print_vector(b);
    //         print_vector(c);
    //     }
    //     else
    //         cout << -1 << endl;
    // }

    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        rep(i, 0, n) cin >> a[i];
        sort(all(a));
        vi b, c;
        int num = a[n - 1];
        rrep(i, n - 1, -1)
        {
            if (a[i] != a[n - 1])
                break;
            if (a[i - 1] == a[i] and a[i] == a[n - 1])
                c.pb(a[i]);
        }
        c.pb(a[n - 1]);
        rep(i, 0, n) if (a[i] != num) b.pb(a[i]);

        if (sz(b) and sz(c))
        {
            cout << sz(b) << " " << sz(c) << endl;
            print_vector(b);
            print_vector(c);
        }
        else
            cout << -1 << endl;
    }

    return 0;
}
