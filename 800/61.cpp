#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
*/
int32_t main(){
    fastio;
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        int ans = 1;
        while (n > 3){
            n = n/4;
            ans *= 2;
        }
        cout << ans << endl;

    }
    return 0;
}