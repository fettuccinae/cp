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
        int n, target, range; cin >> n >> target >> range;
        if (target > n*range || target < -1*n*range){
            cout << -1 << endl;
            continue;
        }

        cout << ceil(abs(target)/(double)range) << endl;

    }
    return 0;
}