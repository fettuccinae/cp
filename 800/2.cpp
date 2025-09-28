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
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int ub =  0,lb = 0;
        if (m <= r){
            cout << lb << " " << m;
        }
        else{
            ub = r;
            lb = (m-ub);
            cout << lb*-1 << " " << ub;
        }
        cout << endl;
    }
    return 0;
}