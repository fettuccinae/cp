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
        int c;
        cin >> c;
        // cout << c;
        if (c % 4 == 0) cout << "BOB\n";
        else cout << "ALICE\n";
    }   
    return 0;
}