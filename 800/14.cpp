#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*

                                      
                                      
*/
int32_t main() {
    fastio;
    int tt; cin >> tt;
    while(tt--){
        int n ; cin >> n;
        vector<int>sides(n);
        for (int i = 0; i < n; i++) cin >> sides[i];
        if (n < 2){
            cout << sides[0] << endl;
            continue;
        }
        sort(sides.rbegin(), sides.rend());
        int res = sides[0] + sides[1] - 1;
        for (int i = 2 ; i < n; i++){
            res+= (sides[i] - 1);
        }
        cout << res << endl;

    }
    return 0;
}