#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
                                      
*/
int32_t main() {
    fastio;
    int tt; cin >> tt;
    while(tt--)   {
        int n; cin >> n;
        int res = 1;

        if (n >= 3){
            res+= 3*((n-2)/15);
            int rem = (n%15);
            if (rem < 2){
                res+=(rem+1);
            }
            res+=2;
        }
        else{
            res+=n;
        }
        cout << res << endl;
    }
    return 0;
}