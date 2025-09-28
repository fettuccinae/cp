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
        n-=2;
        vector <int> inp(n);
        for (int i = 0; i < n; i++) cin >> inp[i];
        bool check = false;
        for (int i = 0; i < n-2; i++){
            if (inp[i] == 1 && inp[i+1] == 0 && inp[i+2] == 1){
                check=true;
                break;
            }
        }
        if (check) cout << "NO\n" << endl;
        else cout << "YES\n" << endl;
    }
    return 0;
}