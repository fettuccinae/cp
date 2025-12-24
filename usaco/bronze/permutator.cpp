#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int n; cin >> n;
    vector<int>a(n), b(n), multiplier(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        multiplier[i] = (i + 1) * (n - i);
        a[i] *= multiplier[i];
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    int res = 0;
    for (int i = 0; i < n; i++) {
        res += a[i] * b[i];
    }
    cout << res << endl;


    return 0;
}