/*
Code by: Satendra Kumar Parteti
GitHub: https://github.com/satendra03
Instagram: https://instagram.com/_satendra_03
Approah: If we have continous 3 spaces left for water, we can fill all just by 2 moves, else we need all apces to fill seprately
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
        vector<char> row(n);
        for (int i = 0; i < n; i++)
            cin >> row[i];

        int spaceCounnt = 0;
        bool just2 = false;

        for (int i = 0; i < n; i++){
            if (row[i] == '.'){
                spaceCounnt++;
                if (i > 0 and i < n - 1){
                    if (row[i - 1] == '.' and row[i + 1] == '.'){
                        just2 = true;
                        break;
                    }
                }
            }
        }

        if(just2) cout << 2 << endl;
        else cout << spaceCounnt << endl;
    }
}