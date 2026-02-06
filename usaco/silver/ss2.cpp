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
    int n, x;
    cin >> n >> x;

    vector<int>data(n), pref_sum(n);
    cin >> data[0];
    pref_sum[0] = data[0];

    for (int i = 1; i < n; i++) {
        cin >> data[i];
        pref_sum[i] = pref_sum[i - 1] + data[i];
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        if (i < n-1 && pref_sum[i + 1] == x) {
            res++;
        }
        for (int j = i + 1; j < n; j++) {
            if (pref_sum[j] - pref_sum[i] == x) {
                res++;
            }
        }
    }
    cout << res << endl;



    return 0;
}