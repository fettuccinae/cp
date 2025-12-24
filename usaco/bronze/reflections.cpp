#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int finder(vector<string> &data, int n) {
    int res = 0;
    for (int i = 0; i < (n / 2); i++) {
        for (int j = 0; j < (n / 2); j++) {
            char a = data[i][j], b = data[i][n - j - 1], c = data[n - i - 1][j], d = data[n - i - 1][n - j - 1];
            if ( a == b && c == d && a == c) {
                continue;
            }
            else {
                vector<char>heh = { a, b, c, d };
                int t1=0, t2=0;
                for (char c : heh) {
                    if (c == '#') t1++;
                    else t2++;
                }
                res += min(t1, t2);
            }
        }
    }
    return res;
}
int32_t main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int n, u;
    cin >> n >> u;
    vector<string>lmao, copy;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        lmao.push_back(s);
    }
    
    cout << finder(lmao, n) << endl;
    for (int i = 0; i < u; i++) {
        int a, b; cin >> a >> b;
        a--;b--;
        
        if (lmao[a][b] == '#') lmao[a][b] = '.';
        else lmao[a][b] = '#';
        cout << finder(lmao, n) << endl;

    }

    return 0;
}
