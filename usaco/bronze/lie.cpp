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
    int n; cin >> n;
    vector<pair<int, char>> data(n);
    for (int i = 0; i < n; i++) {
        int temp; char temp_c;
        cin >> temp_c >> temp;
        data[i] = make_pair(temp, temp_c);
    }
    sort(data.begin(), data.end());

    vector<int>left_liars(n), right_liars(n);
    for (int i = 1; i < n; i++) {
        left_liars[i] += left_liars[i - 1];
        if (data[i - 1].second == 'L') {
            left_liars[i]++;
        }
    }
    for (int i = n - 2; i > -1; i--) {
        right_liars[i] += right_liars[i + 1];
        if (data[i + 1].second == 'G') {
            right_liars[i]++;
        }
    }
    int min_liars = n + 2;
    for (int i = 0; i < n; i++) {
        min_liars = min(min_liars, right_liars[i] + left_liars[i]);
    }
    cout << min_liars << endl;

    return 0;
}