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
        int l, r, d, u; cin >> l >> r >> d >> u;
        if ((l == r && r== u && u==d && l == d)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}