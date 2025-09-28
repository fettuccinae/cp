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
        int m, a, b, c; cin >> m >> a >> b >> c;
        int res = 0;
        res += (m-a >= 0) ? a:m;
        res += (m-b >= 0) ? b:m;
        res += ((m-a) >= c) ? c : ((m-a) > 0 ? (m-a): 0);

        c = (m-a) >= c ? 0 : c - ((m-a) > 0 ? (m-a): 0);

        res += ((m-b) >= c ? c : ((m-b) > 0 ? (m-b): 0));
        cout << res << endl;
    }
    return 0;
}