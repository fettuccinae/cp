#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*

                                      
*/
int32_t main(){
    freopen("blocks.in", "r", stdin);
	freopen("blocks.out", "w", stdout);
    fastio;
    int n; cin >> n;
    vector<int>fin(26, 0);
    string s1, s2;

    for (int i = 0; i < n; i++){
        cin >> s1 >> s2;
        vector<int>tstr1(26, 0), tstr2(26,0);
        for (char c: s1){
            tstr1[int(c - 'a')]+=1;
        }
        for (char c: s2){
            tstr2[int(c - 'a')]+=1;
        }
        for (int i = 0; i < 26; i++){
            fin[i] += max(tstr1[i], tstr2[i]);
        }
    }
    //res 
    for (int i = 0; i < 26; i++){
        cout << fin[i] << endl;
    }

    return 0;
}