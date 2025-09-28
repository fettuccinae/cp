#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
bool valid_triangle(pair<int, int> a, pair<int, int> b, pair<int, int> c) {
    if (a.first == b.first || a.first == c.first || b.first == c.first) {
        if (a.second == b.second || a.second == c.second || b.second == c.second) {
            return true;
        }
    }
    return false;
}

int calc_d_area(pair<int, int> a, pair<int, int> b, pair<int, int> c) {
    return abs((a.first) * (b.second - c.second) + (b.first) * (c.second - a.second) + (c.first) * (a.second - b.second));
}

int32_t main() {
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    fastio;
    int n; cin >> n;
    vector<pair<int, int>>point(n);
    for (int i = 0; i < n; i++) {
        cin >> point[i].first >> point[i].second;
    }
    int max_area = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (valid_triangle(point[i], point[j], point[k])) {
                    max_area = max(max_area, calc_d_area(point[i], point[j], point[k]));
                }
            }
        }
    }
    cout << max_area << endl;
    return 0;
}