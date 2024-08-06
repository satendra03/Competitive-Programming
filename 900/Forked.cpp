/*
Code by: Satendra Kumar Parteti
GitHub: https://github.com/satendra03
Instagram: https://instagram.com/_satendra_03
Approah: Simply calculate the positions of the knight from king and the queen, and give out the common ones
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
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define rrep(i, a, b) for(int i = a; i > b; --i)
#define endl '\n'

// Constants
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

// Utility functions
template<typename T>
void print_vector(const vector<T>& v) {
    for(const auto& elem : v) cout << elem << " ";
    cout << endl;
}

template<typename T>
void print_matrix(const vector<vector<T>>& mat) {
    for(const auto& row : mat) {
        for(const auto& elem : row) cout << elem << " ";
        cout << endl;
    }
}

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// Main function
int main()
{
// The VS Code Setup
#ifndef ONLINE_JUDGE
    freopen("z_input.txt", "r", stdin);
    freopen("z_output.txt", "w", stdout);
#endif

    int t;
    cin>>t;
    while(t--){
        int a, b, xk, yk, xq, yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;
        set<pair<int,int>> dataking;
        set<pair<int,int>> dataqueen;

        //king moves
        vector<vector<int>> directions = {{a,b}, {a,-b}, {-a, b}, {-a, -b}};
        for(auto dir : directions){
            int x = xk + dir[0];
            int y = yk + dir[1];
            dataking.insert({x,y});
        }
        for(auto dir : directions){
            int x = xk + dir[1];
            int y = yk + dir[0];
            dataking.insert({x,y});
        }
        for(auto dir : directions){
            int x = xq + dir[0];
            int y = yq + dir[1];
            dataqueen.insert({x,y});
        }
        for(auto dir : directions){
            int x = xq + dir[1];
            int y = yq + dir[0];
            dataqueen.insert({x,y});
        }
        int ans = 0;
        for(auto p:dataking){
            if(dataqueen.count(p)) ans++;
        }
        cout << ans << endl;
    }
}
