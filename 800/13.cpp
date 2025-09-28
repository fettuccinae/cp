#include <bits/stdc++.h>
using namespace std;
#include <math.h>
// #define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
                                      
*/
int32_t main() {
    fastio;
    int tt; cin >> tt;
    while(tt--){
        int n, k; cin >> n >> k;
        int res = 0;
        if (n % 2 == 0 && k%2 == 0){
            res += ceil((double)n/k);
        }
        else if (n % 2 != 0 && k%2 != 0){
            n-=k;
            k--;
            res++;
            if (n % 2 == 0 && k%2 == 0){
                res += ceil((double)n/k);
            }
        }
        else {
            k-=1;
            if (n % 2 == 0 && k%2 == 0){
                res += ceil((double)n/k);
            }
            else if (n % 2 != 0 && k%2 != 0){
                n-=k;
                k--;
                res++;
                if (n % 2 == 0 && k%2 == 0){
                    res += ceil((double)n/k);
                }
            }
        }
        cout << res << endl;


    }   
    return 0;
}