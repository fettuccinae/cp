#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main() {
    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);
    fastio;
    int n, b;
    cin >> n >> b;
    vector<int>x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int res = n + 1;
    for (int i = 0; i < n; i++) {

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int ne = 0, nw = 0, se = 0, sw = 0;
                for (int k = 0; k < n; k++) {
                    if (x[k] >= (x[i] + 1)) {
                        if (y[k] >= (y[j] + 1)) {
                            ne++;
                        }
                        else {
                            se++;
                        }
                    }
                    else {
                        if (y[k] >= (y[j] + 1)) {
                            nw++;
                        }
                        else {
                            sw++;
                        }
                    }
                }
                res = min(max({ ne, se, nw, sw }), res);
            }
        }
    }
    cout << res  << endl;
    return 0;
}