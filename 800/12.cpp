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
        int n ; float x ; cin >> n >> x;
        vector<int>nums(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {cin >> nums[i]; sum+=nums[i];}
        if ((float)sum/n == x) cout << "YES\n";
        else cout << "NO\n";

    }   
    return 0;
}