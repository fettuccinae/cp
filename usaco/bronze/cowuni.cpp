#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.out","w",stdout);
    fastio;
    int n; cin >> n;
    vector<int>cost(n);
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }
    sort(cost.rbegin(), cost.rend());
    int res = 0, max_c = 0;
    int i = 0;
    for (i = 1; i < cost.size(); i++) {
        if ((i) * cost[i - 1] > (i+1)*cost[i]) {
            if (res <= (i)*cost[i - 1]) {
                max_c = cost[i - 1];
                res = (i)*cost[i - 1];
            }
        }
        else {
            if (res <= (i+1)*cost[i]) {
                max_c = cost[i];
                res = (i+1)*cost[i];
            }
        }
        // int l_max = max((i)*cost[i - 1], (i + 1) * cost[i]);
        // res = max(res, l_max);
        // max_c = max(max_c, max())
    }
    cout << res << " "<< max_c << endl;
    return 0;
}