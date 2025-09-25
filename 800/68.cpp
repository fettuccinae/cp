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
        int score = 0;
        unordered_map<int, int>umap;
        for (int i = 0; i < n; i++){
            int temp; cin >> temp;
            umap[temp]+=1;
            if (umap.count(temp)!= 0 && umap[temp] %2 == 0) score+=1;
        }
        cout << score << endl;
    }
    return 0;
}