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
        vector<int>ve(2*n);
        int res = 0;
        int t0=0,t1=0;
        for (int i = 0; i < 2*n; i++){
            cin >> ve[i];
            if (ve[i] == 0){
                t0++;
            }
            else{
                t1++;
            }
        }
        int m = min(t0, t1);
        if (m % 2 == 1) cout << 1 << " " << m;
        else cout << 0 << " " << m;
        cout << endl;

    }
    return 0;
}