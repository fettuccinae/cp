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
        int maxi = 0, mini;
        for (int i = 0; i < n; i++) {
            int temp = 0;
            cin >> temp;
            if (i == 0) mini = temp;
            if (maxi < temp) maxi = temp;
            else if (mini > temp) mini = temp;
        }
        cout << maxi - mini << endl;
    }
    return 0;
}