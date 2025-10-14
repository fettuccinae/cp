#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
https://usaco.org/index.php?page=viewproblem2&cpid=964
*/
int32_t main() {
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);
    fastio;
    int n; cin >> n;
    string s; cin >> s;
    int k = 1;
    for (; k < n + 1; k++) {
        unordered_set<string>wha;
        bool done = true;
        for (int j = 0; j < n; j++) {
            string ss = "";
            for (int i = j; i < j+ k; i++) {
                ss += s[i];
            }
            if (wha.count(ss) == 1) {
                done = false;
                break;
            }
            else {
                wha.insert(ss);
            }
        }
        if (done == true) {
            break;
        }
    }
    cout << k << endl;
    return 0;
}