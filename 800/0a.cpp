#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
                                      
*/
int32_t main() {
    fastio;
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        int a = stoi(s);
        // cout << a << endl;
        int b = sqrt(a);
        if (b * b != a) cout << -1;
        else {
            cout << 0 << " " << b;
        }
        cout << endl;
    }   
    return 0;
}