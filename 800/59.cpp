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
        unordered_set<int>se;
        for (int i = 0; i < n; i++){
            cin >> ve[i];
            se.insert(ve[i]);
        }
        cout << se.size()<< endl;
    }
    return 0;
}