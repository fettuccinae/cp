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
    int tt; cin >> tt;
    while (tt--) {
        int n, m, h; cin >> n >> m >> h;
        vector<int>temp_a(n);
        vector<pair<int, int>>changes;
        // unordered_map<int, pair<int, int>>real_a(n);
        for (int i = 0; i < n; i++) {
            cin >> temp_a[i];
        }
        int last_idx = 0;
        for (int i = 0; i < m; i++) {
            int b, c; cin >> b >> c;
            b--;
            if (temp_a[b] + c > h) {
                for (int i = 0; i < changes.size(); i++) {
                    temp_a[changes[i].first] -= changes[i].second;
                }
                vector<pair<int, int>>().swap(changes);
            }
            else {
                temp_a[b] += c;
                changes.push_back(make_pair(b, c));
            }

        }
        for (int i : temp_a) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}