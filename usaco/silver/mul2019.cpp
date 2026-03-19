#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main() {
    //freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    string s; cin >> s;
    int n = s.size();
    int pow = 1;
    int num = 0;
    vector<int>data(2019, 0);
    data[0] = 1;
    for (int i = n - 1; i > -1; i--) {
        num = (num + (pow * (int)(s[i] - '0')));
        data[num % 2019]++;
        pow = (pow * 10) % 2019;
    }
    int res = 0;
    for (int i = 0; i < 2019; i++) {
        if (data[i] > 1) {
            res += (data[i] * (data[i] - 1)) / 2;
        }
    }
    cout << res << endl;

    return 0;
}