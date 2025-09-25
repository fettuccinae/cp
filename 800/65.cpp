#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
*/
int32_t main(){
    fastio;
    int tt; cin >> tt;
    while(tt--){
        string s; cin >> s;
        int a = s[0] - '0';
        int b = s[2] - '0';

        if (a > b){
            cout << a << ">" << b << endl;
        }
        else if (a < b){
            cout << a << "<" << b << endl;
        }
        else{
            cout << a << "=" << b << endl;
        }
    }
    return 0;
}