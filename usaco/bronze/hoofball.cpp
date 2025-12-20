#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int max_n = 100, max_x = 1000;
int n;
vector<int>cows, cow_sink;

int nextCow(int nowCow) {
    if (nowCow == n - 1) return n - 2;
    if (nowCow == 0) return 1;
    if (cows[nowCow + 1] - cows[nowCow] >= cows[nowCow] - cows[nowCow - 1]) {
        return nowCow - 1;
    }
    else {
        return nowCow + 1;
    }
}

int32_t main() {
    // freopen("hoofball.in","r",stdin);
    // freopen("hoofball.out","w",stdout);
    fastio;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int c; cin >> c;
        cows.push_back(c);
        cow_sink.push_back(0);
    }
    sort(cows.begin(), cows.end());
    int balls_needed = 0;
    for (int i = 0; i < n; i++) {
        cow_sink[nextCow(i)]++;
    }
    for (int i = 0; i < n; i++) {
        if (cow_sink[i] == 0) {
            balls_needed++;
        }
        if (i < nextCow(i) && i == nextCow(nextCow(i)) && cow_sink[nextCow(i)] == 1 && cow_sink[i] == 1) {
            balls_needed++;
        }
    }
    cout << balls_needed << endl;
    return 0;
}