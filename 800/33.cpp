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
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int days = 3 * (n / (a+b+c));

        int rem = n % (a+b+c);

        if (rem != 0){
            if (rem <= a){
                cout << days+1 << endl;
            }
            else if (rem <= a+b){
                cout << days+1+1 << endl;
            }
            else{
                cout << days+1+1+1 << endl;
            }
        }
        else{
            cout << days << endl;
        }

    }
    return 0;
}