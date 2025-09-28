#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
*/
int32_t main(){
    fastio;
    int tt; cin >> tt;
    while(tt--){
        int k, a, b, Da, Db;
        cin >> k >> a >> b >> Da >> Db;
        int count = 0;
        if (Da < Db){
            while(k >= a){
                int temp = (k-a)/Da;
                temp++;
                count+=temp;
                k-=temp*Da;
            }
            while(k >= b){
                int temp = (k-b)/Db;
                temp++;
                count+=temp;
                k-=temp*Db;
            }
            
        }
        else{
            while(k >= b){
                int temp = (k-b)/Db;
                temp++;
                count+=temp;
                k-=temp*Db;
            }
            while(k >= a){
                int temp = (k-a)/Da;
                temp++;
                count+=temp;
                k-=temp*Da;
            }
        }
        cout << count << endl;
        
    }
    return 0;
}