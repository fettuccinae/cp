#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main(){
    freopen("promote.in","r",stdin);
    freopen("promote.out","w",stdout);
    fastio;
    vector<pair<int, int>>data(4);
    for (int i = 0; i < 4; i++) {
        int a, b; cin >> a >> b;
        data[i] = make_pair(a, b);
    }
    int g2p = (data[3].second - data[3].first);
    int s2g = g2p + data[2].second - data[2].first;
    int b2s = s2g + data[1].second - data[1].first;
    cout << b2s << endl << s2g << endl << g2p << endl;
    return 0;
}