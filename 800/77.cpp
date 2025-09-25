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
        vector<int>a(n);
        int min=1001,max=0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] > max){
                max = a[i];
            }
            if (a[i] < min){
                min = a[i];
            }
        }
        int score= (n-1)*(max-min);
        cout << score <<endl;
    }
    return 0;
}