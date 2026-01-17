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
    string s; cin >> s;
    int res = 0;
    bool flip = false;
    for (int i = n - 2; i > -1; i -= 2) {
        string temp = s.substr(i, 2);
        if ((temp == "GH" && flip == false) || (temp == "HG" && flip == true)) {
            res++;
            flip = !flip;
        }
    }
    cout << res << endl;

    return 0;
}
