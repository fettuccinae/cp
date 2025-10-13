#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main() {
    freopen("angry.in", "r", stdin);
    freopen("angry.out", "w", stdout);
    fastio;
    int n; cin >> n;
    vector<int>distance(n);
    for (auto& it : distance) {
        cin >> it;
    }
    sort(distance.begin(), distance.end());
    int res = 0;
    for (int i = 0; i < n; i++) {
        int local_res = 1;
        int power = 1;

        bool forward= true;
        int next_idx = i + 1;
        while (next_idx < n && forward) {
            if (distance[next_idx] - distance[next_idx - 1] > power) {
                forward = false;
                break;
            }
            else {
                int epi_center = next_idx - 1;
                while (next_idx < n && distance[next_idx] - distance[epi_center] <= power) {
                    next_idx++;
                    local_res++;
                }
                power++;
            }
        }

        int power_back = 1;
        bool back = true;
        int back_idx = i - 1;
        while (back_idx > -1 && back) {
            if (distance[back_idx + 1] - distance[back_idx] > power_back) {
                back = false;
                break;
            }
            else {
                int epi_centre = back_idx + 1;
                while (back_idx > -1 && distance[epi_centre] - distance[back_idx] <= power_back) {
                    back_idx--;
                    local_res++;
                }
                power_back++;
            }
        }
        res = max(res, local_res);
    }
    cout << res << endl;
    return 0;
}