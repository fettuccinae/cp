#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
                                      
*/


int32_t main() {
    fastio;
    // freopen("input.txt", "r", stdin);
    int tt; cin >> tt;
    
    while(tt--){
        bool done = false;
        int n ; cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; i++) cin >> s[i];
        int i = 0;
        int arr[6]={ };
        for (; i < n && !done; i++) {
            int temp;
            temp = s[i]; 
            if (temp > 5) continue;
            else{
                arr[temp]++;
                if (arr[0] >= 3 && arr[1] >= 1 && arr[2] >= 2 && arr[3] >= 1 && arr[5] >= 1) done = true;
            }
            
        }
        if (done) cout << i << endl;
        else cout << 0 << endl;
    }
    return 0;
}