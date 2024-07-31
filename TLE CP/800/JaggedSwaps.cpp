/*
Code by: Satendra Kumar Parteti
GitHub: https://github.com/satendra03
Instagram: https://instagram.com/_satendra_03
Approah: only if there is 1 at the first place then only we can sort the array, as we have nothing to compare tas it is in the first place..
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (a[0] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}