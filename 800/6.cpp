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
        int n, x; cin >> n >> x;
        int teams = 0;
        vector<int>skill(n);
        for (int i = 0; i < n; i++) cin >> skill[i];
        sort(skill.rbegin(), skill.rend());
        int i = 0;
        while ( i < n){
            if (skill[i] >= x) {
                teams++;
                i+=1;
                continue;
            }
            else {
                int j = 2;
                i++;
                while (i < n && (j*skill[i]) < x){
                    j++;i++;
                }
                if (i < n) {
                    teams++;
                    i++;
                }
            }
        }
        cout << teams << endl;

    }
    return 0;
}