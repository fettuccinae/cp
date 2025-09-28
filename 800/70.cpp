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
        vector<int>ve(n);
        cin >> ve[0];
        int i;
        int su;
        for (i = 1; i < n; i++){
            cin >> ve[i];
            su= abs(ve[i] - ve[i-1]);
            // cout << su;
            if (!((su == 5) || (su == 7))){
                cout << "NO\n";
                for (i = i+1; i < n; i++){
                    int temp; cin >> temp;
                }
                i = -1;
                break;
            }
        }
        if (i != -1){
            cout << "YES\n";
        }

    }   
    return 0;
}