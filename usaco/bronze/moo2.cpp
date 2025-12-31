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
    int n;
    cin >> n;
    vector<int> data(n);
    map<int, int> occ, prev;

    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
        occ[data[i]]++;
        if (occ[data[i]] >= 2){
            prev[data[i]] = occ.size() - 1;
        }
    }
    int res = 0;
    for (auto pair : prev)
    {
        res += pair.second;
    }
    cout << res << endl;

    return 0;
}