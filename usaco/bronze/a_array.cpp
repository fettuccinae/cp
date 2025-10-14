#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
https://judge.yosupo.jp/problem/associative_array
*/
int32_t main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int n; cin >> n;
    map<int, int>array;
    vector<int> res;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b;
        if (a == 0) {
            cin >> array[b];
        }
        else {
            res.push_back(array[b]);
        }
    }
    for (int i : res) {
        cout << i << endl;
    }
    return 0;
}