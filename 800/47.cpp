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
        int n, k; cin >> n >> k;
        for (int i = 0; i < n; i++){
            if (i < k)cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
    return 0;
}