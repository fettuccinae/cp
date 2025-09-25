#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*
a b c
c a/b a/b
c a/b a/b
a b c
c a/b a/b
c a/b a/b
a b c
c a/b a/b
c a/b a/b
                       
                                      
*/
int32_t main() {
    fastio;
    int tt; cin >> tt;
    while(tt--){
        int k; cin >> k;
        if (k % 3 == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}