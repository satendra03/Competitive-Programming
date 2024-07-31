/*
Code by: Satendra Kumar Parteti
GitHub: https://github.com/satendra03
Instagram: https://instagram.com/_satendra_03
Approah: The min. fuel will be the max distance
*/

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n + 2);
        a[0] = 0;
        for (int i = 1; i < n + 1; i++)
            cin >> a[i];
        a[n + 1] = x;
        int ans = INT_MIN;
        for (int i = 1; i < n + 2; i++)
        {
            int diff = a[i] - a[i - 1];
            if (i == n + 1)
                diff = 2 * diff;
            ans = max(ans, diff);
        }
        cout << ans << endl;
    }
}