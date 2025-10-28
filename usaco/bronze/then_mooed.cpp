#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
https://usaco.org/index.php?page=viewproblem2&cpid=1445
*/
int32_t main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int n, f; cin >> n >> f;
    string yap; cin >> yap;

    map<string, int>rodeo;
    set<string>moos;

    for (int i = 0; i < n - 2; i++) {
        if (yap[i + 1] == yap[i + 2]) {
            string temp = yap.substr(i, 3);
            rodeo[temp]++;
        }
    }
    for (auto it : rodeo) {
        cout << it.first << " " << it.second << endl;
        if (it.first[0] != it.first[1] && it.second >= f) {
            it.second = -1;
            moos.insert(it.first);
        }
    }
    for (auto it = rodeo.begin(); it != rodeo.end(); ++it) {
        if (it->second == -1 || (it->first[0] == it->first[1])) continue;
        for (auto jt = rodeo.begin(); jt != rodeo.end(); ++jt) {
            if (jt->second == -1 || (it->first == jt->first)) continue;
            if (it->second + jt->second >= f && it->first[1] == jt->first[1]) {
                moos.insert(it->first);
            }
        }
    }
    cout << moos.size() << endl;
    for (auto it : moos) {
        cout << it << endl;
    }
    return 0;
}