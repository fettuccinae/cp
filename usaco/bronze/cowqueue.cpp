#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main() {
    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);
    fastio;
    int n; cin >> n;
    vector<pair<int, int>>queue(n);
    for (int i = 0; i < n; i++) {
        cin >> queue[i].first >> queue[i].second;
    }
    sort(queue.begin(), queue.end());
    int time = 0;
    
    for (int i = 0; i < n; i++) {
        if (time < queue[i].first) {
            time += (queue[i].first - time);
        }
        time += queue[i].second;
    }
    cout << time << endl;
    return 0;
}