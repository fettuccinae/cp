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
        int n, j, k;
        cin >> n >> j >> k;
        vector<int>ve(n);
        for (int i = 0; i < n; i++) cin >> ve[i];

        int no_of_pairs = 0;
        for (int i = 0; i < n; i++){
            if (ve[i] <= ve[j-1] && i != j-1) no_of_pairs++;
        }
        
        int no_of_pairs_2 = n-2 - no_of_pairs;
        no_of_pairs_2 = no_of_pairs_2 > 0? no_of_pairs_2: 0;
        // cout << no_of_pairs;
        int t = no_of_pairs+no_of_pairs_2;
        // cout << t;
        if ((k >= (n-t))) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}