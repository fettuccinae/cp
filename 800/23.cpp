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
        int n; cin >> n;
        string s; cin >> s;
        // cout << s << endl;
        int res = 0;
        for (int i = 0; i < n-1; i++){
            if (s[i] != s[i+1]){
                res++;
            }
        }
        if (s[0] == '1') {
            res++;
        }
        cout << res << endl;


    }
    return 0;
}