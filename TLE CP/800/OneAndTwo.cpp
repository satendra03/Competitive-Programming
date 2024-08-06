/*
Code by: Satendra Kumar Parteti
GitHub: https://github.com/satendra03
Instagram: https://instagram.com/_satendra_03
Approach: Using suffix multiplication technique, the condition is to make left subarray and right subarray multiplication equal, so juts take one ele from left and remove the same ele from the whole multiplication, till they become same (wrong ans on test 2)


Also if we can just manage the freq of 2s on both the subarray equal
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
        int n;
        cin >> n;
        vi a(n);
        // int right = 1;
        // rep(i, 0, n)
        // {
        //     cin >> a[i];
        //     right *= a[i];
        // }
        // int ans = -1;
        // int left = 1;
        // rep(i, 0, n)
        // {
        //     left *= a[i];
        //     right /= a[i];
        //     if (left == right)
        //     {
        //         ans = i + 1;
        //         break;
        //     }
        // }
        // cout << ans << endl;

        int right = 0;
        rep(i,0,n){
            cin>>a[i];
            if(a[i]==2) right++;
        }
        int left = 0;
        int ans = -1;
        rep(i,0,n){
            if(a[i]==2) {
                left++;
                right--;
            }
            if(left == right){
                ans = i+1;
                break;
            }
        }
        cout << ans << endl;


    }
    return 0;
}
