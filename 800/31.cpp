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
        int n, a, b; cin >> n >> a >> b;
        if (a%2 != b%2) {
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}