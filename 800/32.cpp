#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
                                      
*/
int32_t main() {
    fastio;
    int tt; cin >> tt;
    
    while(tt--){
        bool run = true;
        int n; cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];
        for (int i = 0; i < n-1; i++){
            if (2 * min(nums[i],nums[i+1])  > max(nums[i], nums[i+1])){
                cout << "YES\n"; 
                run = false;
                break;
            }
        }
        if (run) cout << "NO\n";
    }   
    return 0;
}