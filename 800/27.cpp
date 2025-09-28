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
        int a, b, c, d, x, s1,s2,s3; 
        cin >> a >> b >> c >> d;
        s1 = a+b;
        s2 = c-b;
        s3 = d-c;

        if (s1==s2 && s2==s3) {cout << 3 << endl;
        }
        else if (s1 == s2 || s2 == s3 || s3 == s1){
            cout << 2 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
    return 0;
}