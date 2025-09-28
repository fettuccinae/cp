#include <vector>
#include <set>
#include <string>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);


int main(){
    freopen("mowing.in", "r", stdin);
	freopen("mowing.out", "w", stdout);
    fastio;

    vector<vector<int>>field(2002, vector<int>(2002, 0));
    int n; cin >> n;
    bool ex = false;
    int time = 0, xi = 500, yi = 500, x = 1000;
    for (int d = 0; d < n; d++){
        char dir; int dis;
        cin >> dir >> dis;
        
        if (dir == 'N'){
            int yf = yi + dis;
            for (yi++; yi <= yf; yi++){
                time++;
                if (field[xi][yi] != 0){
                    ex = true;
                    x = min(time - field[xi][yi], x);
                }
                field[xi][yi] = time;                
            }
            yi--;

        }
        else if (dir == 'S'){
            int yf = yi - dis;
            for (yi--; yi >= yf; yi--){
                time++;
                if (field[xi][yi] != 0){
                    ex = true;
                    x = min(time - field[xi][yi], x);
                }
                    field[xi][yi] = time;
                
            }
            yi++;

        }
        else if (dir == 'E'){
            int xf = xi + dis;
            for (xi++; xi <= xf; xi++){
                time++;
                if (field[xi][yi] != 0){
                    ex = true;
                    x = min(time - field[xi][yi], x);
                }
                field[xi][yi] = time;
            }
            xi--;
        }
        else{
            int xf = xi - dis;
            for (xi--; xi >= xf; xi--){
                time++;
                if (field[xi][yi] != 0){
                    ex = true;
                    x = min(time - field[xi][yi], x);
                }
                field[xi][yi] = time;
            }
            xi++;

        }

    }
    if (ex == true){
            cout << x << endl;
        }
        else{
            cout << -1 << endl;
        }

    

    return 0;
}