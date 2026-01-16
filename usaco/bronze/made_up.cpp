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
    int n;
    cin >> n;
    vector<int>a(n), b(n), c(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    map<int, int>a_occ;
    for (int i : a) {
        a_occ[i]++;
    }
    int res = 0;
    for (int cj : c) {
        res += (a_occ[b[cj - 1]]);
    }
    // for (auto xd : res) {
    //     cout << xd.first << xd.second << endl;
    // }
    cout << res << endl;
    return 0;
}