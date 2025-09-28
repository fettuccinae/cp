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
        vector<int>ve(n);
        for (int i = 0; i < n; i++){
            cin >> ve[i];
        }
        int res = -1;
        
        for (int i = 0; i < n; i++){
            bool huh = true;
            for (int j = 0; j < n && huh; j++){
                if (j != i && abs(ve[j]-ve[i]) % k == 0){
                    huh = false;
                    break;
                }
            }
            if (huh){
                res = i+1;
                cout << "YES\n" << res << endl;
                break;
            }
        }
        if (res == -1) cout << "NO\n";
    }
    return 0;
}