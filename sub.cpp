#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int N, K;
    std::cin >> N >> K;
    std::vector<int>data(N);
    for (int i = 0; i < N; i++){
        std::cin >> data[i];
    }
    int res = 1+K;
    for (int i = 1; i < N; i++){
        if ((data[i] - data[i-1]) <= 1 + K){
            res += data[i] - data[i-1];
        }
        else{
            res += 1 + K;
        }
    }
    
    std::cout << res << std::endl;
    return 0;
}