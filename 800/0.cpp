#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

/*


                                      
                                      
*/
int32_t main() {
    fastio;
    int SIDE = 3;
    int up = 0, down = SIDE, right = SIDE, left = 0;
    int arr[SIDE][SIDE] = {0};
    int val = 1;
    while(up <= down && left <= right){
        for (int i = left; i <= right; i++){
            arr[up][i] = val;
            val++;
        }
        up++;
        for (int i = up; i <= down; i++){
            arr[i][right] = val;
            val++;
        }
        right--;
        for (int i = right; i >= left; i-- ){
            arr[down][i] = val;
            val++;
        }
        down--;
        for (int i = down; i >= up; i-- ){
            arr[i][left] = val;
            val++;
        }
        left++;
    }
    for (int i = 0; i < SIDE; i++){
        for (int j = 0; j < SIDE; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}