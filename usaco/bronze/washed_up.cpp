#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main() {
    freopen("notlast.in", "r", stdin);
    freopen("notlast.out", "w", stdout);
    fastio;
    int n; cin >> n;
    unordered_map<string, int>real;
    unordered_set<string>names;
    int g_min = 10e9;
    for (int i = 0; i < n; i++) {
        string temp; cin >> temp;
        names.insert(temp);
        int t; cin >> t;
        real[temp] += t;
    }
    for (auto it : real) {
        g_min = min(it.second, g_min);
    }

    bool tie = false;
    set <string>res;

    if (names.size() < 7) {
        for (auto it : real) {
            if (it.second == g_min) {
                res.insert(it.first);
            }
        }
    }
    else {
        int l_min = 10e9;
        for (auto it : real) {
            if (it.second != g_min) {
                l_min = min(l_min, it.second);
            }
        }
        for (auto it : real) {
            if (it.second == l_min) {
                res.insert(it.first);
            }
        }
    }
    
    if (res.size() != 1) {
        cout << "Tie" << endl;
    }
    else {
        for (string s : res) {
            cout << s << endl;
        }
    }


    return 0;
}