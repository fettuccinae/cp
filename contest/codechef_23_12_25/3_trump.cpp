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
	    string s; cin >> s;
	    int res = 0;
	    int win = 0, lose = 0;
	    for (int i = 0; i < n; i++){
	        if (s[i] == '1'){
	            win++;
	        }
	        else{
	            lose++;
	        }
	        if (win > lose){
	            res++;
	        }
	    }
	    cout << res << endl;
	    
	    
	    
	    
	}

}
