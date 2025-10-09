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
    int tt; cin >> tt;
    vector<int>weight(2*tt);
    for (int i = 0; i < 2 * tt; i++) {
        cin >> weight[i];
    }
    sort(weight.begin(), weight.end());
    int diff = 0, diff2 = 0, res = 0;
    for (int i = 0; i < weight.size(); i+=2) {
        if (i != 2 * tt - 1) {
            diff = max(weight[i + 1] - weight[i], diff);
            res += weight[i + 1] - weight[i];
        }
        else {
            diff = weight[i];
        }
    }
    cout <<( res - diff )<< endl;
    return 0;
}