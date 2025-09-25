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
        if (n%2 == 0){
            cout << -1 << endl;
            continue;
        }
        cout << n << " ";
        for (int i = 1; i < n; i++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}