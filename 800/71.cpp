#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio> // for freopen

/*


                                      
*/
int32_t main(){
    fastio;
    // freopen("input.txt", "r", stdin);
    int tt; cin >> tt;
    while(tt--){
        int n,m,r,c; cin >> n >> m >> r >> c;
        int p = (r-1)*m + c;
        int rem = (n*m - p);
        int involved = (rem/m);
        int shen = involved*(m + (m-1));
        shen += m- ((p-1)%m + 1);
        cout << shen << endl;
    }
    return 0;
}