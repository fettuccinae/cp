#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
                                      
*/
int32_t main() {
    fastio;
    int tt; cin >> tt;
    while(tt--){
        string s; cin >> s;
        int n = s.length();
        bool copy = false;
        for (int i = 0; i < n; i++){
            if (i != n-1 && s[i] == s[i+1]){
                copy = true;
                break;
            }
        }
        if (copy) cout << 1 << endl;
        else{
            cout << n << endl;
        }

    }   
    return 0;
}