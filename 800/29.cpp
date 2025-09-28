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
        int r, c; cin >> r >> c;
        if (r > c) cout << (r+1) << endl;
        else
        cout << c+1 << endl;
    }   
    return 0;
}