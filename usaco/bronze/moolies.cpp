/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

int main()
{
    long long N, K;
    std::cin >> N >> K;
    std::vector<long long>data(N);
    for (int i = 0; i < N; i++){
        std::cin >> data[i];
    }
    int res = 0;
    int local_res = 1 + K;
    for (int i = 1; i < N; i++){
        if (res + (data[i] - data[i-1]) <= res + 1 + K){
            local_res += data[i] - data[i-1];
        }
        else{
            res = local_res + 1 + K;
            local_res = 0;
        }
    }
    if (local_res != 0){
        res+= local_res;
    }
    std::cout << res << std::endl;

    return 0;
}