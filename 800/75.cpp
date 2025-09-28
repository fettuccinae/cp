#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>
/*


                                      
*/
int32_t main(){
    // freopen("input.txt", "r", stdin);
    fastio;
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector<int>h(n), so(n+1,0);
        // unordered_map<int,int>umap;
        int max = 0;
        for (int i = 0; i < n; i++){
            cin >> h[i];
            so[h[i]]++;
            if (so[h[i]] > max){
                max = so[h[i]];
            }
        }
        int rem = n - max;
        cout << rem << endl;
        
    }
    return 0;
}