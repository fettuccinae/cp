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
        int x, y, a;
        cin >> x >> y >> a;
        // a = a* 5;
        bool k = false;
        // for (int i = 0; a >= 0; i++){
        //     if (i%2 == 0){
        //          a = a-x;
        //         }
        //     else {
        //         a = a - y;
        //         if (a < 0) {
        //             k = true;
        //         }
        //     }
        // }
        int rem = a%(x+y);
        if (rem == 0|| rem < x){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }    
    return 0;
}