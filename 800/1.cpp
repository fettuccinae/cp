#include <bits/stdc++.h>
#include <vector>
#include <string.h>
using namespace std;

// #define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
                                      
*/
int32_t main() {
    fastio;
    int tt; cin >> tt;
    while(tt--){
        int size; cin >> size;
        string s;
        cin >> s;
        vector<int>vL,vM;
        for (int i = 0; i < size - 1; i++){
            if (s[i] == '>') vM.push_back(i);
            else vL.push_back(i);
        }
        vector<int>arr(size, 0);
        int val = 1;
        for (int i = (vL.size()-1); i>=0; i--){
            
            if (vL[i] == 0){
                        arr[1] = val++;
                        arr[0] = val++;
                        
            }
            else{
                arr[vL[i]+1] = val++;
            }
        }
        for (int i = 0; i < vM.size(); i++ ){
            if (vM[i] == 0) {
                arr[0] = val++; arr[1] = val++;
            }
            else {
                arr[vM[i]+1] = val++;
            }
        }
        for (auto it: arr) cout << it << " ";
        cout << endl;
        }

    return 0;
}