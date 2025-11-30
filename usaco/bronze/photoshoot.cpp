#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int counter(string s, bool reverse) {
    int score = 0;
    if (reverse == false) {
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 1 && s[i] == 'G') {
                score++;
            }
            else if (i % 2 == 0 && s[i] == 'H') {
                score++;
            }
        }
    }
    else {
        for (int i = s.size(); i > -1; i--) {
            if (i % 2 == 1 && s[i] == 'G') {
                score++;
            }
            else if (i % 2 == 0 && s[i] == 'H') {
                score++;
            }

        }
    }
    return score;
}
int32_t main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int N; cin >> N;
    string s; cin >> s;
    int res = 0;
    for (int i = s.size(); i > 0; i--) {
        string sub = s.substr(0, i);
        int score = counter(sub, false);
        int 
    }

    return 0;
}
