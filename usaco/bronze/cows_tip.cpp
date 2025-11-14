#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#include <cstdio>

/*
 */
void flip(vector<vector<char>>& flipee, int a, int b){
    for (int i = 0; i <= a; i++){
        for (int j = 0; j <= b; j++){
            if (flipee[i][j] == '1'){
                flipee[i][j] = '0';
            }
            else{
                flipee[i][j] = '1';
            }
            // cout << flipee[i][j];
        }
        // cout << endl;
    }
}

int32_t main()
{
    freopen("cowtip.in", "r", stdin);
    freopen("cowtip.out", "w", stdout);
    fastio;
    int tt;
    cin >> tt;
    vector<vector<char>> grid;
    for (int i = 0; i < tt; i++)
    {
        vector<char> data;
        for (int j = 0; j < tt; j++)
        {
            char c;
            cin >> c;
            data.push_back(c);
        }
        grid.push_back(data);
    }
    int res = 0;
    for (int i = tt - 1; i > -1; i--)
    {
        for (int j = tt - 1; j > -1; j--){
            if (grid[i][j] == '1'){
                flip(grid, i, j);
                res++;
            }
        }
    }
    cout << res << endl;

    return 0;
}