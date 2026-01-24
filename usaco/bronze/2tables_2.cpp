#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main() {
    //freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int tt; cin >> tt;
    while (tt--) {
        int rw, rh; cin >> rw >> rh;
        int a, b, c, d; cin >> a >> b >> c >> d;
        int t0w = c - a, t0h = d - b;
        int t1w, t1h; cin >> t1w >> t1h;

        bool row = t0w + t1w <= rw;
        bool column = t0h + t1h <= rh;
        if (!row && !column) {
            cout << -1 << endl;
            continue;
        }

        int left_pos = row ? max(t1w - a, (int)0): 10e9;
        int right_pos = row ? max(c - (rw - t1w), (int)0): 10e9;
        int top_pos = column ? max(d - (rh - t1h), (int)0): 10e9;
        int bottom_pos = column ? max(t1h - b, (int)0): 10e9;
        cout << min({ left_pos, right_pos, top_pos, bottom_pos }) << endl;

    }
    return 0;
}