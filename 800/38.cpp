#include <bits/stdc++.h>
#include <math.h>
using namespace std;

// #define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
                                      
*/
int32_t main() {
    fastio;
    int tt; cin >> tt;
    while(tt--)   {
        int n; cin >> n;
        int res = 0;
        int sum = 0;
        sum = 0;
        for (int i = 0; i < n; i++){
            int a; cin >> a;
            sum+=a;
            int d = sqrt(sum);
            if (d*d == sum && d%2 == 1) res++;
        }
        cout << res << endl;
    }
    return 0;
}