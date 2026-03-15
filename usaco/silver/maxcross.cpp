#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main(){
    freopen("maxcross.in","r",stdin);
    freopen("maxcross.out","w",stdout);
    fastio;
    int n, k, b;
    cin >> n >> k >> b;
    vector<int>sum(n, 0), data(n, 0);
    for (int i = 0; i < b; i++) {
        int a; cin >> a;
        a--;
        data[a] = 1;
    }
    
    for (int i = 1; i < n; i++) {
        sum[i] = sum[i - 1] + data[i];
    }
    int res = 9999;
    for (int i = k - 1; i < n; i++) {
        res = min(res, sum[i]-sum[i-(k-1)]);
    }
    cout << res << endl;

    return 0;
}