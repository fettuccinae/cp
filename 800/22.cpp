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
        string s; cin >> s;
        size_t n = s.length();
        if (n < 3) n = 2;
        cout << s.substr(0,n-2) + "i" << endl;
    }
    return 0;
}