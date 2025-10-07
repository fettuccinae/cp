#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    int tt; cin >> tt;
    for (int i = 0; i < tt; i++) {
		int n, m;
		cin >> n >> m;
		vector<vector<int>> a(n, vector<int>(m));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) { cin >> a[i][j]; }
		}

		long long ans = 0;
		for (int i = 0; i < m; i++) {
			vector<long long> temp;
			long long sum = 0;
			for (int j = 0; j < n; j++) {
				temp.push_back(a[j][i]);
				sum += a[j][i];
			}
			long long curr = 0;
			sort(temp.begin(), temp.end());
			for (int j = 0; j < n; j++) {
				curr += temp[j];
				ans += llabs((sum - curr) - (n - 1 - j) * temp[j]);
			}
		}

		cout << ans << "\n";
	}
}
