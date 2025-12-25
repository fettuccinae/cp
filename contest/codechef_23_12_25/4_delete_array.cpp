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
	    vector<int>data(n), cost(n), res(n);
	    for (int i = 0; i < n; i++){
	        cin >> data[i];
	    }
	    for (int i = 0; i < n; i++){
	        cin >> cost[i];
	    }
	    int l_min = 99999;
	    int sum_res = 0;
	    for (int i = 0; i < n; i++){
	        l_min = min(cost[i], l_min);
	        
	        res[i] = l_min*data[i];
	        sum_res+=res[i];
	    }
        cout << sum_res << endl;
	    
	    
	    
	    
	    
	}

}
