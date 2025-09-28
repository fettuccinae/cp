#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
                                      
*/
int32_t main() {
    fastio;
    int tt; cin >> tt;
    while(tt--)    {
        int n, m;
        cin >> n >> m;
        int ones = 0, zeros = 0;
        vector <vector<char>> out; 
        for (int i = 0; i < n; i++){
            vector <char> temp(m);
            string s;
            cin >> s;
            for (int j = 0; j < m; j++) {
                temp[j] = s[j];
            }
            out.push_back(temp);
        }
        int changes = 0;
        int row=0, col = 0;
        //row wise
        for (int i = 0; i < n; i++){
            
            bool res = false;
            for (int j = 0; j < m; j++){
                res = res^ (out[i][j] - '0');
            }
            if (res) row++;
        }
        //col wise
        for (int j = 0; j < m; j++){
            bool res = false;
            for (int i = 0; i < n; i++){
                res = res^ (out[i][j] - '0');
            }
            if (res) col++;
        }

        changes = max(row,col);
        cout << changes << endl;




    }
    return 0;
}