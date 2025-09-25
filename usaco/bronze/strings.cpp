#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
string s;
vector<string> res;
int chars[26];

void evil_recursion(string curr) {
    if (curr.size() == s.size()) {
        res.push_back(curr);
        return;
    }
    else {
        for (int i = 0; i < 26; i++) {
            if (chars[i] != 0) {
                chars[i]--;
                evil_recursion(curr + (char)(i + 'a'));
                chars[i]++;
            }
        }
    }
}
int32_t main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        chars[s[i] - 'a']++;
    }
    evil_recursion("");
    cout << res.size() << endl;
    for (string p : res) {
        cout << p << endl;
    }
    return 0;
}