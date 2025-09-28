#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
*/
int32_t main(){
    fastio;
    int tt; cin >> tt;
    int p = 0, b = 0;
    while(tt--){
        char c; int n;
        cin >> c >> n;
        if (c == 'P'){ 
            p+= n;
        }
        else{
            b = n;
            if (b - p > 0){ cout << "YES\n"; p = 0; b = 0;}
            else {
                cout << "NO\n";
                p -= b;
                b = 0;
            }
        }


    }
    return 0;
}