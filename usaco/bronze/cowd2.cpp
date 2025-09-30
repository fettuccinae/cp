#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int n, m;
int total_sheds = 100;
vector<array<int, 4>>ac;
vector<array<int, 3>>cow;
vector<bool>use;
int res = 10e9;


void cost_it() {
    bool works = true;
    for (int i = 1; i <= total_sheds && works; i++) {
        int l_cooling = 0;
        // for acs
        for (int j = 0; j < m; j++) {
            if (use[j]) {
                auto& [a, b, p, money] = ac[j];
                if (a <= i && i <= b) {
                    l_cooling += p;
                }
            }
        }
        // for cows
        for (int j = 0; j < n; j++) {
            auto& [s, t, c] = cow[j];
            if (s <= i && i <= t) {
                if (l_cooling < c) {
                    works = false;
                    break;
                }
            }
        }
    }

    if (works) {
        int temp = 0;
        for (int i = 0; i < m; i++) {
            if (use[i]) {
                temp += ac[i][3];
            }
        }
        res = min(temp, res);
    }

}


int evil_recursion(int i) {
    if (i == m) {
        cost_it();
        return 1;
    }
    else {
        use[i] = true;
        evil_recursion(i + 1);
        use[i] = false;
        evil_recursion(i + 1);
        return 0;
    }
}


int32_t main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int s, t, c;
        cin >> s >> t >> c;
        cow.push_back({ s,t,c });
    }
    for (int j = 0; j < m; j++) {
        int a, b, p, m; cin >> a >> b >> p >> m;
        ac.push_back({ a, b, p, m });
    }
    use.assign(m, false);
    evil_recursion(0);
    cout << res << endl;

    return 0;
}