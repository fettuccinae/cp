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
    unordered_set<int>all_possibilities, sum_shi;
    vector<int>jury(k), mem(n);
    int res = 0;

    for (int i = 0; i < k; i++) {
        cin >> jury[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> mem[i];
    }
    int l_sum = 0;
    for (int i = 0; i < k; i++) {
        l_sum += jury[i];
        sum_shi.insert(l_sum);
        for (int j = 0; j < n; j++) {
            all_possibilities.insert(mem[j] - l_sum);
        }
    }
    for (int i : all_possibilities) {
        int j = 0;
        for (; j < n; j++) {
            if (sum_shi.count(mem[j] - i) == 0) {
                break;
            }
        }
        if (j == n) {
            res++;
        }
    }


    // for (int i : res) {
    //     cout << i << endl;
    // }
    cout << res << endl;

    return 0;
}