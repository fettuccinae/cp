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
        string a; cin >> a;
        vector<int>data(n), pref_sum(n + 1, 0);
        map<int, int>sum_count;
        for (int i = 0; i < n; i++) {
            data[i] = a[i]-'0';
            pref_sum[i + 1] = pref_sum[i] + data[i];
        }
        for (int i = 0; i < n + 1; i++) {
            sum_count[pref_sum[i] - i]++;
        }
        int res = 0;
        for (const auto &[_, f] : sum_count) {
            res += f * (f - 1) / 2;
        }
        cout << res << endl;

    }
    return 0;
}