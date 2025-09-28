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
        int n,k ; cin >> n >> k;
        vector<int>ve(k, 0);
        int brand = 0;
        for (int i = 0 ; i < k; i++){
            int b, c; cin >> b >> c;
            if (ve[b-1] == 0){
                brand++;
            }
            ve[b-1]+=c;
        }
        sort(ve.rbegin(), ve.rend());
        int res = 0, i = 0;
        while(n-- && i < brand){ // why k, store no of brands somewhere better lmao.
            res+=ve[i];
            i++;
        }
        cout << res << endl;
    }
    return 0;
}