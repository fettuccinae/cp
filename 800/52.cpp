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
        int a, x, y;
        cin >> a >> x >> y;
        if ((a > x && a > y) || (a < x && a < y)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}