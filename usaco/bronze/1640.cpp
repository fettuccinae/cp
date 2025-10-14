#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
https://cses.fi/problemset/task/1640
*/
int32_t main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int n, x; cin >> n >> x;
    vector<int>array(n);
    map<int, int>pos_nums;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        pos_nums[array[i]] = i;
    }
    bool whatevs = true;
    for (int i = 0; i < n; i++) {
        if (pos_nums.count(x - array[i]) != 0 && pos_nums[x - array[i]] != i) {
            cout << i + 1 << " " << pos_nums[x - array[i]] + 1 << endl;
            whatevs = false;
            break;
        }
    }
    if (whatevs){
    cout << "IMPOSSIBLE" << endl;}


    return 0;
}