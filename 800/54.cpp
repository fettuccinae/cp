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
        vector <int> ve(n);
        bool lesgo = false;
        for (int i = 0; i < n; i++){
            cin >> ve[i];
            if (ve[i] == 0){
                lesgo = true;
            }
        }
        bool huh = false;
        if (n == 2){
            if (ve[0]%2 == ve[1]%2) huh = true;
        }

        for (int i = 0; i < n; i++){
            if (ve[i] == 0 | !lesgo){
                if (i != n-1 && ve[i] == ve[i+1] && (ve[i] == 0 | (i != 0 && ve[i] == 1 &&!lesgo))) {
                    huh = true; 
                    break;
                }
                // if ((i != n-1 && i != 0 && (ve[i+1] != 1  || ve[i-1] != 1))){
                //     huh = true;
                // }
            }
        }
        if (huh){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}