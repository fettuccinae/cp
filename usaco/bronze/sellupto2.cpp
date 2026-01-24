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
int calculate(int idx, vector<int>& data, int curr_watch_c, int n)
{
    if (idx >= n) {
        return 0;
    }
    if (mem[idx][curr_watch_c] != -1) {
        return mem[idx][curr_watch_c];
    }

    int new_watch_c = curr_watch_c + 1;
    int r0 = calculate(idx + 1, data, new_watch_c, n);
    int r1 = 0, r2 = 0;
    if (new_watch_c >= 1) {
        r1 = data[idx] + calculate(idx + 1, data, new_watch_c - 1, n);
    }
    if (new_watch_c >= 2) {
        r2 = 2 * data[idx] + calculate(idx + 1, data, new_watch_c - 2, n);
    }
    mem[idx][curr_watch_c] = max(r0, max(r1, r2));
    return mem[idx][curr_watch_c];
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
        for (int i = 0; i < n; i++) {
            cin >> data[i];
        }
        for (int i = 0; i < 101; i++) {
            for (int j = 0; j < 101; j++) {
                mem[i][j] = -1;
            }
        }
        int res = calculate(0, data, 0, n);
        cout << res << endl;
    }
    return 0;
}