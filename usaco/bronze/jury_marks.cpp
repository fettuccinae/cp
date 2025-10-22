#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
https://codeforces.com/contest/831/problem/C
*/
int32_t main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int k, n; cin >> k >> n;
    set<int>res;
    vector<int>jury(k), mem(n);
    for (int i = 0; i < k; i++) {
        cin >> jury[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> mem[i];
    }
    int l_sum = 0;
    for (int i = 0; i < k; i++) {
        l_sum += jury[i];
        for (int j = 0; j < n; j++) {
            if ((mem[j] - l_sum ) <= 4000000 && (mem[j] - l_sum ) >= -4000000){
                res.insert(mem[j] - l_sum);
            }
        }
    }
    // for (int i : res) {
    //     cout << i << endl;
    // }
    cout << res.size() << endl;

    return 0;
}