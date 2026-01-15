#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#include <cstdio>

/*
 */
int32_t main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.out","w",stdout);
    fastio;
    int res_area = 0;
    int n = 3;
    vector<pair<int, int>> data(3);
    for (int i = 0; i < 3; i++) {
        int x, y;
        cin >> x >> y;
        res_area += (x * y);
        data[i] = make_pair(x, y);
    }
    int res = sqrt(res_area);
    if ((res * res) != res_area) {
        cout << -1 << endl;
        return 0;
    }

    for (int rotate_mask = 0; rotate_mask < (1 << n); rotate_mask++) {
        vector<string> grid(res, string(res, 'E'));
        int placed = 0;
        bool fail = false;
        for (int i = 0; i < res && !fail; i++) {
            for (int j = 0; j < res && !fail; j++) {
                if (grid[i][j] != 'E') {
                    continue;
                }
                if (placed == n) {
                    fail = true;
                    break;
                }
                int width = data[placed].first;
                int height = data[placed].second;

                if (rotate_mask & (1 << placed)) {
                    swap(width, height);
                }
                for (int a = i; a < i + width; a++) {
                    for (int b = j; b < j + height; b++) {
                        if (a >= res || b >= res || grid[a][b] != 'E') {
                            fail = true;
                            break;
                        }
                    }
                    if (fail)
                        break;
                }
                if (fail)
                    break;

                for (int a = i; a < i + width; a++) {
                    for (int b = j; b < j + height; b++) {
                        grid[a][b] = 'A' + placed;
                    }
                }
                placed++;
            }
        }
        if (fail || placed != n) {
            continue;
        }
        else {
            cout << res << endl;

            for (string& row : grid) {
                cout << row << endl;
            }
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}