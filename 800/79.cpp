#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*


                                      
*/
int32_t main(){
    //freopen('input.txt','r',stdin);
    fastio;
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector<int>ve(n);
        int wM=0,hM=0;
        for (int i = 0; i < n; i++){
            int t1,t2;
            cin >> t1 >> t2;
            if (t1 > wM){
                wM = t1;
            }
            if (t2 > hM){
                hM = t2;
            }
        }
        cout << (wM + hM)*2 << endl;
    }
    return 0;
}