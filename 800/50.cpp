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
    int ga, fb, gc, fd; cin >> ga >> fb >> gc >> fd;
    int a = min(ga, gc); int b = min(fb, fd);
    if (a >= b) cout << "Gellyfish\n";
    else cout << "Flower\n";
    }
    return 0;
}