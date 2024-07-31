/*
Code by: Satendra Kumar Parteti
GitHub: https://github.com/satendra03
Instagram: https://instagram.com/_satendra_03
Approah: If Vanya has to win, the starting number, i.e n must be successor or predecessor of number that are divisible by 3, else Vova won't let him win by opposing the move
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if(!((n+1)%3) or !((n-1)%3)) cout << "First" << endl;
        else cout << "Second" << endl;
    }
}