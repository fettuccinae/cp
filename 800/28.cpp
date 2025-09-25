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
        int n; cin >> n;
        unordered_set<int>s1,s2;
        for (int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            s1.insert(temp);
        }
        for (int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            s2.insert(temp);
        }
        // cout << s1.size() << s2.size();
        if ((s1.size() + s2.size()) < 4) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}