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
        int k; cin >> k;
        vector<int>ve(k);
        unordered_map<int, int>umap;

        for (int i = 0; i < k; i++){
            cin >> ve[i];
            umap[ve[i]]+=1;
        }
        sort(ve.begin(), ve.end());
        int pdt = k-2;
        bool br = false;
        for (int i = 0; !br && i < k; i++){
            if (pdt%ve[i] == 0){
                if (umap.count(pdt/ve[i]) != 0){
                    int val = pdt/ve[i];
                    if (val != ve[i] || umap[val] > 1){
                        cout << ve[i] << " "<<val << endl;
                        break; br = true;
                    }
                }
            }
        }
    }
    return 0;
}