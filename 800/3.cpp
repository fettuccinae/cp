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
        vector <string> vs(3);
        for (int i = 0; i < 3; i++) {
            cin >> vs[i];
            cout << vs[i][0];
        }
        cout << endl;
    }
    return 0;
}