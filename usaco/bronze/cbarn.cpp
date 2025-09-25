#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*


                                      
*/
int32_t main(){
    freopen("cbarn.in", "r", stdin);
	freopen("cbarn.out", "w", stdout);

    fastio;
    int n; cin >> n;
    //cow_in_rooms
    vector<int>cir(n);
    for (int i = 0; i < n; i++){
        cin >> cir[i];
    }
    int res = 1e9;
    for (int i = 0; i < n; i++){
        int score = 0;
        for (int j = 1; j < n; j++){
            score+= j * cir[(i+j)%n];
        }
        res = min(res,score);
    }
    cout << res << endl;


    return 0;
}