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
        string s; cin >> s;
        vector<int>op(10,-1), two, counter(10, 0);
        unordered_set<int>se;
        for (int i = 0 ;i < 10; i++){
            se.insert(s[i] - '0');
            two.push_back(s[i] - '0');
            counter[s[i] - '0']++;
        }
        for (int it: se){
            // cout << it;
            op[9-it] = it;
            counter[it]--;
        }
        // cout << endl;
        sort(two.begin(), two.end());
        // for (int it: two){
        //     cout << it << " ";
        // }

        for (int i = 0; i < 10; i++){
            if (op[i] == -1){
                for (int j = 0; j < two.size(); j++){
                    if (two[j] >= (9-i) && counter[two[j]] > 0){
                        op[i] = two[j];
                        counter[two[j]]--;
                        break;
                    }
                }
            }
        }
        for (int it: op){
            cout << it;
        }
        cout << endl;

    }
    return 0;
}