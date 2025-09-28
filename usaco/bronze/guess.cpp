#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/


int intersect(set<string>s1, set<string>s2) {
    int res = 0;
    for (string s : s1) {
        if (s2.count(s) == 1) {
            res++;
        }
    }
    return res;
}


int32_t main() {
    freopen("guess.in", "r", stdin);
    freopen("guess.out", "w", stdout);
    fastio;
    int n; cin >> n;
    vector<set<string>>animal(n);
    for (int i = 0; i < n; i++) {
        string a; cin >> a;
        int k; cin >> k;
        for (int j = 0; j < k; j++) {
            string c; cin >> c;
            animal[i].insert(c);
        }
    }
    int max_same = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            max_same = max(max_same, intersect(animal[i], animal[j]));
        }
    }
    cout << max_same + 1 << endl;
    return 0;
}
