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
        int l,r,k; cin >> l >> r >> k;
        int q = r/k;
        cout << (q-l+1 > 0 ? q-l+1 : 0) << endl;
    }   
    return 0;
}