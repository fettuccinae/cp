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
    while (tt--) {
        int n; cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        for (int i = 0; i < n; i++) {
            int key = nums[i];
            int j = i - 1;
            while (j > -1 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j+1] = key;
        }
        for (int a : nums) {
            cout << a << endl;
        }
    }
    return 0;
}