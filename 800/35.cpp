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
        int n, m; cin >> n >> m;
        int res = 0;
        int tot = 0;
        // bool what = false;
        // cin.ignore();

        int i;
        for (i = 0; i< n; i++){
            string s; 
            cin >> s;
            int size = s.size();
            if (tot + size <= m ){
                res+=1;
                tot+=size;
            }
            else{
                for (int j = i+1; j < n; j++){
                    cin >> s;
                }
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}