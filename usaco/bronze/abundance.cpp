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
    int tt; cin >> tt;
    vector<int>data(tt);
    for (int i = 0; i < tt; i++) {
        cin >> data[i];
    }
    sort(data.begin(), data.end());
    int res = 1;
    for (int i = 1; i < tt; i++) {
        if (data[i] != data[i - 1]) {
            res++;
        }
    }
    cout << res << endl;
    return 0;
}