#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main() {
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
    fastio;
    int n; cin >> n;
    vector <int> start(n), end(n);
    int max_e = 0;
    for (int i = 0; i < n; i++) {
        cin >> start[i] >> end[i];
    }
    

    int res = 0;
    for (int g = 0; g < n; g++) {
        vector<int>total(1001, 0);
        int least_area = 1001;
        int total_area = 0;

        for (int i = 0; i < n; i++) {
            if (i == g) {
                continue;
            }
            int area = 0;
            for (int a = start[i]; a < end[i]; a++) {
                if (total[a] == 0) {
                    total[a] = 1;
                    area++;
                }
            }
            total_area += area;
            // least_area = min(area, least_area);
        }

        res = max(total_area, res);
    }
    cout << res << endl;
    return 0;
}