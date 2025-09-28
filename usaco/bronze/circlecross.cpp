#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main() {
    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);
    fastio;
    string s;
    cin >> s;
    int res = 0;
    vector<int>global(26, 0);
    for (int i = 0; i < s.size(); i++) {
        int* ptr = &global[s[i] - 'A'];
        if (*ptr == 1) {
            continue;
        }
        else {
            *ptr = 1;
        }
        vector<int>info(26, 0);
        bool flag = true;
        for (int j = i + 1; j < s.size() && flag; j++) {
            if (s[i] == s[j]) {
                flag = false;
            }
            else if (global[s[j] - 'A'] == 0) {
                if (info[int(s[j] - 'A')] == 0) {
                    info[int(s[j] - 'A')] += 1;
                    res += 1;
                }
                else {
                    info[int(s[j] - 'A')]--;
                    res--;
                }
            }
            else {
                continue;
            }
        }
    }
    cout << res << endl;
    return 0;
}