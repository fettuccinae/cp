#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int n, q; cin >> n >> q;
    map<int, vector<int>>idx;
    for (int i = 0; i < n; i++) {
        int val; cin >> val;
        idx[val].push_back(i);
    }
    vector<vector<int>>ranges;
    for (auto it : idx) {
        ranges.push_back({ it.second[0], it.second.back(), it.second.size() });
    }
    int start = ranges[0][0], end = ranges[0][1], maxx = 0;
    int res = 0;
    sort(ranges.begin(), ranges.end());
    for (vector<int>& r : ranges) {
        if (r[0] > end) {
            res += end - start + 1 - maxx;
            start = r[0];
            end = r[1];
            maxx = r[2];
        }
        else {
            end = max(r[1], end);
            maxx = max(r[2], maxx);
        }
    }
    res += end - start + 1 - maxx;
    cout << res << endl;
    
    return 0;
}