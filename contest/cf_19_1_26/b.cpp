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
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        int maxx = 0;
        for (int i = 0; i < n; i++) {
            int val; cin >> val;
            maxx = max(maxx, val);
        }
        cout << (maxx * n) << endl;
    }
    return 0;
}