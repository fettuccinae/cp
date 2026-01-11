#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int n; cin >> n;
    vector<int>a(n), b(n), moved(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--;
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        b[i]--;
    }

    int res = 0, j = 0;
    for (int i = 0; i < n; i++) {
        while (j < n && moved[a[j]]) {
            j++;
        }
        if (a[j] == b[i]) {
            j++;
        }
        else {
            res++;
            moved[b[i]] = 1;
        }
    }
    cout << res << endl;




    return 0;
}