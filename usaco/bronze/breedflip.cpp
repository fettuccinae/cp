#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    fastio;
    int size; cin >> size;
    string a, b; cin >> a >> b;
    int res = 0;
    int local_res = 0;
    for (int i = 0; i < size; i++) {
        if ((a[i] == b[i] && local_res != 0)|| (a[i] != b[i] && (i == size-1))) {
            local_res = 0;
            res++;
        }
        else if (a[i] == b[i] && local_res == 0) {
            continue;
        }
        else {
            local_res++;
        }
    }
    cout << res << endl;

    return 0;
}