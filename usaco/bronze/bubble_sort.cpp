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
    fastio;
    int tt; cin >> tt;
    vector<int>a(tt);
    for (int i = 0; i < tt; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < tt; i++) {
        for (int j = 0; j < tt - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    for (int i : a) {
        cout << i << endl;
    }
    return 0;
}