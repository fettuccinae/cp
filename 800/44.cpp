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
        int n; cin >> n;
        string s; cin >> s;
        bool f = false;
        unordered_set<char>se = {};
        for (int i = 0; i < n-1 && !f; i++){
            if (se.count(s[i]) == 1) f = true;
            else{
                se.insert(s[i]);
            }
        }
        // if (s[n-1] == s[n-2]) f = true;
        se = {};
        for (int i = n-1; i >0 && !f; i--){
            if (se.count(s[i]) == 1) f = true;
            else{
                se.insert(s[i]);
            }
        }

        if (f)
        cout << "YES\n";
        else
            cout << "NO\n";

    }   

    return 0;
}