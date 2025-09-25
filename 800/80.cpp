#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*


                                      
*/
int32_t main(){
    //freopen('input.txt','r',stdin);
    fastio;
    int tt; cin >> tt;
    while(tt--){
        string s,t;
        cin >> s >> t;
        int count = 0;
        int minLen = min(s.size(), t.size());
        for (int i = 0; i < minLen; i++){
            if (s[i] == t[i]){
                count++;
            }
            else{
                break;
            }
        }
        cout << (s.size() + t.size() - (count> 0 ? count-1 : 0)) << endl;
    }
    return 0;
}