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
        string s; cin >> s;
        for (int i = s.size() - 1; i > -1 ; i--){
            if (s[i] == 'p') cout << 'q';
            else if (s[i] == 'q') cout << 'p';
            else cout << 'w';
        }
        cout << endl;
    }
    return 0;
}