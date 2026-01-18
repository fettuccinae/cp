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
        int n; cin >> n;
        vector<int>data;
        set<int>blah;
        for (int i = 0; i < n; i++) {
            int val; cin >> val;
            if (blah.count(val) == 0) {
                data.push_back(val);
                blah.insert(val);
            }
        }
        if (n == 1) {
            cout << 1 << endl;
            continue;
        }
        sort(data.begin(), data.end());
        n = data.size();
        int res = 0;
        for (int i = 0; i < n; i++) {
            int curr_res = 0;
            for (int j = i + 1; j < n; j++) {
                if (data[j] - data[j - 1] > 1) {
                    res = max(curr_res, res);
                    curr_res = 0;
                }
                else {
                    curr_res++;
                    res = max(curr_res, res);
                }
            }
        }
        cout << res + 1 << endl;

    }
    return 0;
}