#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>
long long MOD = 1e9 + 7; 
/*


                                      
*/
long long modpow(long long a, long long b, long long mod) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

int32_t main(){
    // freopen("input.txt","r",stdin);
    fastio;
    const long long MOD = 1e9 + 7;
    int n;
    cin >> n;
    cout << modpow(2, n, MOD) << endl;
}