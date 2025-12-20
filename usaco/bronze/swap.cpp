#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/

void crap(vector<int>& data, int start, int end) {
    vector<int>temp;
    for (int i = end; i >= start; i--) {
        temp.push_back(data[i]);
    }
    for (int i = 0; i < temp.size(); i++) {
        data[start + i] = temp[i];
    }
}
int32_t main() {
    freopen("swap.in", "r", stdin);
    freopen("swap.out", "w", stdout);
    fastio;
    int n, k; cin >> n >> k;
    vector<int>data;
    for (int i = 0; i < n; i++) {
        data.push_back(i);
    }
    int a, b, c, d; cin >> a >> b >> c >> d;
    a--;b--;c--;d--;
    set < vector<int>>created{ data };

    while (true) {
        crap(data, a, b);
        crap(data, c, d);
        if (created.count(data) == 1) {
            break;
        }
        created.insert(data);
    }
    int len_before_repeat = created.size();
    k = k % len_before_repeat;
    while (k-- > 0) {
        crap(data, a, b);
        crap(data, c, d);
    }
    for (int i : data) {
        cout << i + 1 << endl;
    }
    return 0;
}