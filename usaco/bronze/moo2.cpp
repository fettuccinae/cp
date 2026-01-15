#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int n;
    cin >> n;
    vector<int>data(n), uniq(n);
    unordered_map<int, int>count;
    unordered_map<int, pair<int, int>>res;
    unordered_set<int>curr;
    for (int i = 0; i < n; i++) {
        cin >> data[i];
        count[data[i]]++;
        curr.insert(data[i]);
        if (count[data[i]] == 1) {
            res[data[i]] = make_pair(i, 0);
        }
        else {
            res[data[i]] = make_pair(i, res[data[i]].first);
        }
        uniq[i] = curr.size() - 1;
    }
    int final_res = 0;
    for (auto& it : res) {
        final_res += uniq[it.second.second];
        
    }
    cout << final_res << endl;

    return 0;
}