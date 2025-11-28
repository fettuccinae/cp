#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main(){
    freopen("outofplace.in","r",stdin);
    freopen("outofplace.out","w",stdout);
    fastio;
    int n; cin >> n;
    vector<int>main, comp;
    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        main.push_back(temp);
        comp.push_back(temp);
    }
    sort(comp.begin(), comp.end());
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (main[i] != comp[i]) {
            res++;
        }
    }
    cout << res - 1 << endl;
    return 0;
}