#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int n;
vector<int>w;

int evil_recursion(int index, int sum1, int sum2) {
    if (index == n) {
        return (abs(sum1 - sum2));
    }
    else {
        return min(evil_recursion(index + 1, sum1 + w[index], sum2), evil_recursion(index + 1, sum1, sum2 + w[index]));
    }
}
int32_t main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    cin >> n;
    w.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    cout << evil_recursion(0, 0, 0) << endl;

    return 0;
}


