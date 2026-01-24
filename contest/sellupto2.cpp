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
int mem[101][101];
int calculate(int idx, vector<int> &data, int curr_watch_c, int n)
{
    if (idx == n){
        return 0;
    }

    int new_watch_c = curr_watch_c += 1;
}
int32_t main()
{
    // freopen("input.in","r",stdin);
    // freopen("output.out","w",stdout);
    fastio;
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> data(n);
        for (int i = 0; i < n; i++){
            cin >> data[i];
        }
        for (int i = 0; i < 101; i++){
            for (int j = 0; j < 101; j++){
                mem[i][j] = -1;
            }
        }
    }
    return 0;
}