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
        vector<int>perky(n);
        int oddC= 0, eveC=0;
        for (int i = 0; i < n; i++){
            cin >> perky[i];
            if (perky[i] % 2 == 0){
                eveC++;
            }
            else{
                oddC++;
            }
        }
        int res = oddC;

        if (eveC > 0) {res++;}

        if (eveC == 0){
            res-=1;
        }
        
        
        cout << res << endl;
    }
    return 0;
}