#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int intersect(unordered_set<string>s1, unordered_set<string>s2) {
    int res = 0;
    for (string s : s1) {
        if (s2.count(s) == 1) {
            res++;
        }
    }
    return res;
}

int32_t main() {
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    fastio;
    int n, m; cin >> n >> m;
    vector<string>s_cow(n), p_cow(n);
    for (int i = 0; i < n; i++) {
        cin >> s_cow[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> p_cow[i];
    }

    int res = 0;
    
    for (int i = 0; i < m; i++) {
        for (int j = i+1; j < m; j++) {
            for (int l = j + 1; l < m; l++) {
                unordered_set<string>s1, s2;
                for (string s : s_cow) {
                    string s_s({ s[i], s[j], s[l] });
                    s1.insert(s_s);
                }
                for (string p : p_cow) {
                    string p_s({ p[i], p[j], p[l] });
                    s2.insert(p_s);
                }
                if (intersect(s1, s2) == 0) {
                    res++;
                }
            }

        }
    }
    cout << res << endl;


    return 0;
}