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
        int x, y; cin >> x >> y;
        if (x == 1&& y == 1) {
            cout << 1 << endl;
            continue;
        }
        cout << y-x << endl;
    }
    return 0;
}