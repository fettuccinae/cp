#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main() {
    freopen("citystate.in", "r", stdin);
    freopen("citystate.out", "w", stdout);
    fastio;
    int n; cin >> n;
    int res = 0;
    map<pair<string, string>, int>city_state;
    for (int i = 0; i < n; i++) {
        string t1, t2;
        cin >> t1 >> t2;
        string l_city = string() + t1[0] + t1[1];
        // cout << l_city << t2 << endl;    
        if (t2 != l_city && city_state[{ t2, l_city }] != 0) {
            res += city_state[{ t2, l_city }];
        }
        city_state[{ l_city, t2 }]++;
    }
    cout << res << endl;
    return 0;
}