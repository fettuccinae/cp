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
    int tt; cin >> tt;
    vector<int>weight(2 * tt);
    for (int i = 0; i < 2 * tt; i++) {
        cin >> weight[i];
    }
    sort(weight.begin(), weight.end());
    int res = 10e9;
    for (int i = 0; i < weight.size(); i++) {
        for (int j = i + 1; j < weight.size(); j++) {
            int temp_res = 0;
            bool add = true;
            for (int k = 0; k < weight.size(); k++) {
                if (k != i && k != j) {
                    if (add == true) {
                        temp_res += -1 * weight[k];
                        add = false;
                    }
                    else {
                        temp_res += weight[k];
                        add = true;
                    }
                }
            }
            res = min(temp_res, res);
        }
    }
    cout << res << endl;
    return 0;
}