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
        int n; cin >> n;
        string s; cin >> s;
        int score = 0;
        for (int i = 0; i < n; i++){
            if (s[i] == '1'){
                score++;
            }
        }
        int res = 0;
        for (int i = 0; i < n; i++){
            if (s[i] == '1'){
                res+= (score - 1);
            }
            else{
                res += (score + 1);
            }
        }
        cout << res << endl;
    }
    return 0;
}