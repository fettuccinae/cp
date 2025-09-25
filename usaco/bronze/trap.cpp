#include <set>
#include <string>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);


int main(){
    freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);
    fastio;
    int n, k; cin >> n >> k;
    vector<int>diamonds(n);

    for (int i = 0; i < n; i++){
        cin >> diamonds[i];
    }
    int res = 0;
    sort(diamonds.begin(), diamonds.end());
    for (int i = 0; i < n; i++){
        int temp = 1;
        for (int j = i+1; j < n; j++){
            if (diamonds[j] - diamonds[i] > k){
                break;
            }
            temp++;
        }
        res = max(res, temp);
    }
    cout << (res) << endl;

}