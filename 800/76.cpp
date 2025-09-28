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
        int n; cin >> n;
        for (int i = 0 ; i < n-1; i++){
            cout << 0;
        }
        if (n == 1){
            cout << 0 << endl;
        }
        else{
            cout << 1 << endl;
        }

    }
    return 0;
}