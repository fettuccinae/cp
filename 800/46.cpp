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
        int n = 4;
        vector<int> l(n), b(n);
        for (int i = 1; i < n; i++){
            cin >> l[i];
            cin >> b[i];
        }
        if (b[1] == b[2] && b[2] == b[3] && (l[1]+l[2]+l[3]) == b[1]) cout << "YES\n";
        else if (l[1] == l[2] && l[2] == l[3] && (b[1]+b[2]+b[3]) == l[1]) cout << "YES\n";
        else if (b[2] == b[3] && l[2]+l[3] == l[1] && b[2]+b[1] == l[1]) cout << "YES\n";
        else if (l[2] == l[3] && b[2]+b[3] == b[1] && l[2]+l[1] == b[1]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}