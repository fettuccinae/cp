#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#include <cstdio>

/*
 */
int32_t main()
{
    freopen("bcount.in","r",stdin);
    freopen("bcount.out","w",stdout);
    fastio;
    int n, q;
    cin >> n >> q;
    vector<vector<int>>data(n+1, vector<int>(3, 0));
    for (int i = 0; i < n; i++) {
        int c; cin >> c;
        c--;
        for (int j = 0; j < 3; j++) {
            data[i + 1][j] = data[i][j];
        }
        data[i + 1][c]++;
    }
    for (int i = 0; i < q; i++) {
        int a, b; cin >> a >> b;
        for (int j = 0; j < 2; j++) {
            cout << data[b][j] - data[a-1][j] << " ";
        }

        cout <<data[b][2]-data[a-1][2] << endl;
    }
    return 0;
}