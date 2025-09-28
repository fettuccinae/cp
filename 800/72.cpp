#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
*/

int32_t main(){
    fastio;
    int tt; cin >> tt;
    while(tt--){
        int a, b; cin >> a >> b;
        int res = lcm(a,b);
        cout << res << endl;       
    }
    return 0;
}