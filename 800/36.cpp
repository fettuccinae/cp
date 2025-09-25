#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
                                      
*/
int32_t main() {
    fastio;
    int tt; cin >> tt;
    while(tt--)   {
        int n; cin >> n;
        int czero = 0;
        int ezero = 0;
        int what= 0;
        vector<int>a(n);

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int i = 0, k = n-1;
        if (a[0] == 0){
            i++;
            for (int j = i; j < n; j++){
                if (a[j] == 0) i++;
                else break;
            }
        }
        if (a[n-1] == 0){
            k--;
            for (int l = k; l > i; l--){
                if (a[l] == 0) k--;
                else break;
            }
        }

        for (int t = i; t <= k; t++){
            // if (i == 0 || i == n-1) {if (a[t] == 0) what++; continue;}
            if (a[t] == 0) czero++;
            else ezero++;
        }
        if (czero == 0 && ezero == 0) cout << 0 << endl;
        else if (czero == 0 && ezero != 0) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}