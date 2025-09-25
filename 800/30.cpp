#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
                                      
*/
int32_t main() {
    fastio;
    int tt; cin >>tt;
    while(tt--)   {
        int n, m; cin >> n >> m;
        int per = 0;
        int m1,m2;
        cin >> m1 >> m2;
        int res = 4*m;
        for (int i = 1; i < n; i++){
            cin >> m1 >> m2;
            res = res + (4*m - 2*(m-m1+m-m2));
        }
        cout << res << endl;
    }
    return 0;
}