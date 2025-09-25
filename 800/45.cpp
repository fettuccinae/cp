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
        int n, s; cin >> n >> s;
        int a, b; 
        for (int i = 0; i < n; i++){
            int t; cin >> t;
            if (i == 0) a = t;
            if (i == n-1) b = t;
        }
        if (n == 1) {cout << abs(s-a) << endl; continue;}
        int aa = (s-a) > 0 ? s-a : 0; int bb = (b-s) > 0 ? b-s: 0;
        int stpr = 0;
        if (aa > bb){
            stpr += aa + (2*bb);
        }
        else{
            stpr += (bb + (2*aa));
        }
        cout << stpr << endl;
    }
    return 0;
}