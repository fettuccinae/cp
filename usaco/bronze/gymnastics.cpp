#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main() {
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    fastio;
    int n, k; cin >> n >> k;

    vector<vector<int>> data(n, vector<int>(k)), final_mat(k, vector<int>(k, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cin >> data[i][j];
            data[i][j]--;
        }
    }
    int fin_sub_res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int a = j + 1; a < k; a++) {
                if (final_mat[data[i][j]][data[i][a]] == 0 && final_mat[data[i][a]][data[i][j]] == 1) {
                    fin_sub_res++;
                }
                final_mat[data[i][j]][data[i][a]] = 1;
            }
        }
    }
    cout << ((k * (k - 1)) / 2) - fin_sub_res << endl;



    return 0;
}