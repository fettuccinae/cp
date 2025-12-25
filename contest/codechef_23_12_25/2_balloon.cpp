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
	    int n; cin >> n;
	    vector<int>data(n);
	    int res = 0;
	    for (int i = 0; i < n; i++){
	        cin >> data[i];
	        res += data[i]*(i+1);
	    }
	    cout << res << endl;
	    
	    
	    
	    
	}

}
