#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        vector<int>log(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> log[i];
            sum += log[i];
        }
        if (sum == 0) {
            cout << 0 << endl;
            continue;
        }
        for (int x = 1; x <= sum; x++) {
            if (sum % x != 0) {
                continue;
            }
            bool valid = true;
            int temp_sum = 0;
            for (int i = 0; i < n; i++) {
                temp_sum += log[i];

                if (temp_sum > x) {
                    valid = false;
                    break;
                }
                else if (temp_sum == x) {
                    temp_sum = 0;
                }
            }
            if (valid == true) {
                cout << n - (sum / x) << endl;
                break;
            }

        }

    }
    return 0;
}