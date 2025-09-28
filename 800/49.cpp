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
        int n, x; cin >> n >> x;
        int count = 0;
        int closed = 0;
        vector<int>door(n);
        for (int i =0; i < n; i++){
            cin >> door[i];
            if (door[i] == 1) closed++;
        }
        bool start = false;
        for (int i = 0; i < n; i++){
            if (door[i] == 1){ 
                count++;
                closed--;
                start = true;
            }
            else if (start && closed != 0) count++;
        }
        if (count > x) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}