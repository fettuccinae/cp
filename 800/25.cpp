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
        string s; cin >> s;
        int res = 0;
        for (int i = 0; i < s.length(); i++) if (s[i] == '1') res++;
        cout << res << endl;
    }
    return 0;
}