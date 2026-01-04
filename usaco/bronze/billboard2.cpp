#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main() {
    freopen("billboard.in","r",stdin);
    freopen("billboard.out","w",stdout);
    fastio;
    vector<int> pos_a, pos_b, pos_c;
    int max_x = 0, min_x = 2001, max_y = 0, min_y = 2001;
    for (int i = 0; i < 12; i++) {
        int c; cin >> c; c += 1000;
        if (i < 8) {
            if (i % 2 == 0) {
                max_x = max(c, max_x);
                min_x = min(c, min_x);
            }
            else {
                max_y = max(c, max_y);
                min_y = min(c, min_y);
            }
        }
        if (i < 4) {
            pos_a.push_back(c);
        }
        else if (i < 8) {
            pos_b.push_back(c);
        }
        else {
            pos_c.push_back(c);
        }
    }
    // for (int i : pos_a) {
    //     cout << i << endl;
    // }

    vector<vector<int>> space(2001, vector<int>(2001, 0));
    for (int i = pos_a[0]; i < pos_a[2]; i++) {
        for (int j = pos_a[1]; j < pos_a[3]; j++) {
            space[i][j] = 1;
        }
    }
    for (int i = pos_b[0]; i < pos_b[2]; i++) {
        for (int j = pos_b[1]; j < pos_b[3]; j++) {
            space[i][j] = 1;
        }
    }
    for (int i = pos_c[0]; i < pos_c[2]; i++) {
        for (int j = pos_c[1]; j < pos_c[3]; j++) {
            space[i][j] = 0;
        }
    }
    int res = 0;
    for (int i = 0; i < 2001; i++) {
        for (int j = 0; j < 2001; j++) {
            if (space[i][j] == 1) {
                res++;
            }
        }
    }
    cout << res << endl;


    return 0;
}