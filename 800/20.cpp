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
        int x,y; cin >> x >> y;
        int res = (x-y);
        if (res == -1){
            cout << "YES\n";
        }
        else{
            if ((res)%9 == 8){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}