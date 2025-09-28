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
        int n; cin >> n;
        vector<int> v(n);
        int max = 0;
        int same = 0;
        for (int i = 0 ;i < n; i++){
            cin >> v[i];
            if (v[i] > v[max]){
                max = i;
            }
            if (i != 0){
                if (v[i] == v[i-1]){
                    same++;
                }
            }
        }
        if (same == n-1){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            for (int i = 0; i < n; i++){
                if (i != max) {
                    cout << 1 << " ";
                } 
                else{
                    cout << 2 << " ";
                }
            }
            cout << endl;
        }   

        

    }
    return 0;
}