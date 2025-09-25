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
        vector<int> ve(n);
        for (int i = 0; i < n; i++)
            cin >> ve[i];
        sort(ve.begin(), ve.end());
        if ((ve[0] + ve[n-1])%2 == 0){
            cout << 0 << endl;
            continue;
        }
        int o1=0,o2=0,e1=0,e2=0;
        if (ve[0]%2 == 0){
            for (int i = 0; i < n; i++){
                if(ve[i]%2 == 0) {
                    e1++;
                }   
                else {
                    break;
                }
            }
            for (int i = n-1; i > -1; i--){
                if (ve[i]%2 != 0){
                    o1++;
                }
                else{
                    break;
                }

            }
            cout << min(o1,e1) << endl;
            continue;
        }
        else{
            for (int i = 0; i < n; i++){
                if(ve[i]%2 != 0) {
                    e2++;
                }   
                else {
                    break;
                }
            }
            for (int i = n-1; i > -1; i--){
                if (ve[i]%2 == 0){
                    o2++;
                }
                else{
                    break;
                }
            }
            cout << min(o2,e2) << endl;
            continue;
        }
        

    }
    return 0;
}