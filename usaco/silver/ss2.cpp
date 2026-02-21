#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main(){
    //freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int n, x;
    cin >> n >> x;
    vector<int>data(n, 0);
    int res = 0;
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    map<int, int>sums;
    sums[0] = 1;
    int p_sum = 0;
    for (int i = 0; i < n; i++) {
        p_sum += data[i];
        res += sums[p_sum - x];
        sums[p_sum]++;
    }

    cout << res << endl;
    return 0;
}