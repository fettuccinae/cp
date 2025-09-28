#include <vector>
#include <set>
#include <string>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
*/


int main(){
    // freopen("tttt.in", "r", stdin);
	// freopen("tttt.out", "w", stdout);
    fastio;
    int n; cin >> n;
    vector<int>flowers(n);
    
    for (auto &f: flowers){
        cin >> f;
    }
    int res = n;
    for (int i = 0; i < n; i++){
        set<int>unique_flowers;
        int temp = flowers[i];
        unique_flowers.insert(flowers[i]);
        for (int j = i+1; j < n; j++){
            unique_flowers.insert(flowers[j]);
            temp+=flowers[j];
            if (temp % (j-i+1) == 0){
                if (unique_flowers.count(temp / (j-i+1)) != 0){
                    res++;
                }
            }
            
        }
    }
    cout << res << endl;


    return 0;
}