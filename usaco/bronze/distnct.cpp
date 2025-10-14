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
    int n; cin >> n;
    vector<int>num_list(n);
    for (auto& it : num_list) {
        cin >> it;
    }
    unordered_set<int>num_set;
    for (int i = 0; i < n; i++) {
        num_set.insert(num_list[i]);
    }
    cout << num_set.size() << endl;
    return 0;
}