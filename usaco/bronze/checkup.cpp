#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>


int32_t main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int n; cin >> n;
    vector<int>a(n), b(n), check(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int matches = 0;
            for (int k = 0; k < n; k++) {
                if (k > j || k < i) {
                    if (a[k] == b[k]) {
                        matches++;
                    }
                }
                else {
                    if (a[k] == b[i+(j-k)]) {
                        matches += 1;
                    }
                }

            }
            check[matches] += 1;
        }
    }
    for (int i : check) {
        cout << i << endl;
    }

    return 0;
}

