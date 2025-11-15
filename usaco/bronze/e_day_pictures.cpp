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
    int n; cin >> n;
    vector<int>odd, even;
    int o = 0, e = 0;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        if (t % 2 == 0) {
            even.push_back(t);
            e++;
        }
        else {
            odd.push_back(t);
            o++;
        }
    }
    int group = 0;
    while (o != 0 || e != 0) {
        if (group % 2 == 0) {
            if (e > 0 && o == 0) {
                e = 0;
                group++;
            }
            else if (e > 0) {
                e--;
                group++;
            }
            else if (o > 1) {
                o-=2;
                group++;
            }
            else {
                o -= 1;
                group-=1;
            }
        }
        else {
            if (o > 0) {
                o--;
                group++;
            }
            else {
                e--;
                group -= 1;
            }
        }
    }
    cout << group << endl;

    return 0;
}