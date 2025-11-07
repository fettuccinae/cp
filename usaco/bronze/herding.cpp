#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#include <cstdio>

/*
1231231
https://usaco.org/index.php?page=viewproblem2&cpid=915
 */
int check(vector<int> arr)
{
    if (arr[2] - arr[1] == arr[1] - arr[0] == 1)
    {
        return 0;
    }
    else if (arr[2] - arr[1] == 2 || arr[1] - arr[0] == 2)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int32_t main()
{
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);
    fastio;
    vector<int> location(3);
    cin >> location[0] >> location[1] >> location[2];
    sort(location.begin(), location.end());
    cout << check(location) << endl
         << max(location[2] - location[1], location[1] - location[0]) - 1 << endl;

    return 0;
}