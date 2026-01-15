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
int32_t main()
{
    freopen("square.in","r",stdin);
    freopen("square.out","w",stdout);
    fastio;
    int a[4], b[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cin >> b[i];
    }
    int x_square = max({a[2] - a[0], b[2] - b[0], abs(a[0] - b[2]), abs(a[2] - b[0])});
    int y_square = max({a[3] - a[1], b[3] - b[1], abs(a[1] - b[3]), abs(b[1] - a[3])});
    cout << (x_square > y_square ? (x_square * x_square) : (y_square * y_square)) << endl;
    return 0;
}