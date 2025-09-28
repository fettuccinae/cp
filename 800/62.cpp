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
        int n,k; cin >> n >> k;
        vector<int>ve(n);
        for (int i = 0; i < n; i++){
            cin >> ve[i];
        }
        sort(ve.rbegin(), ve.rend());
        int sum = 0, coin = 0;
        for (int i = 0; i < n; i++){
            if (ve[i] + sum <= k){
                sum+= ve[i];
            }
            else{
                coin+= (k - sum);
                sum+= coin;
                break;
            }
        }
        if (sum == k){
            cout << coin << endl;
        }
        else{
            cout << (k - sum) << endl;
        }

    }
    return 0;
}