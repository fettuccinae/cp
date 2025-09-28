#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
                                      
*/
int32_t main() {
    fastio;
    // from the streets lil bbabry
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector<int>a(n),b(n);
        for(int i = 0 ; i < n; i++) cin >> a[i];
        for(int i = 0 ; i < n; i++) cin >> b[i];

        int res = 0;

        for (int i = 0; i < n; i++){
            if (i < n-1){
                if (a[i] > b[i+1]){
                    a[i] = a[i] - b[i+1];
                }
                else{
                    a[i] = 0;
                }
            }
            res+=a[i];
        }
        cout << res << endl;

    }
    return 0;
}