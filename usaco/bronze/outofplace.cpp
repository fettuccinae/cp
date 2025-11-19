#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main(){
    freopen("outofplace.in","r",stdin);
    freopen("outofplace.out","w",stdout);
    fastio;
    int N; cin >> N;
    set<int>un;
    vector<int>data;
    int oop_index;
    for (int i = 0; i < N; i++) {
        int t; cin >> t;
        if (un.count(t) != 0) {
            data.push_back(t);
            un.insert(t);
        }
    }
    int n = data.size();
    for (int i = 0; i < n-1; i++){
        if (data[i] > data[i + 1]) {
            
        }
    }
    int new_index;
    for (int i = 0; i < data.size(); i++) {
        if (data[i] < data[oop_index]){
            new_index = i;
        }
    }
    cout << new_index - oop_index

    return 0;
}