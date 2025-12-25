#include <bits/stdc++.h>
#include <vector> 
#include <unordered_set>
#include <map>
#include <tuple>
using namespace std;
#define int long long
/*

    on god

*/
signed main() {
	int t; cin >> t;
	while(t--){
	    int n, m; cin >> n >> m;
	    if (n == 1){
	        cout << (m+1) << endl;
	        continue;
	    }
	    int bits = 0;
	    while((1 << bits) <= m){
	        bits++;
	    }
	    int maxx = (1 << bits);
	    maxx--;
	    cout << (m - (maxx - m) + 1) << endl;
	    
	    
	}

}
