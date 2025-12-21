#include <bits/stdc++.h>
using namespace std;

// #define int long long
// #define fastio                        \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(nullptr);                 \
//     cout.tie(nullptr);
#include <cstdio>

/*
 */
int n;
vector<int> res;
set<int> elements;
void evil_recursion(int depth, int curr)
{
    if (depth == n)
    {
        for (int i : res)
        {
            cout << i + 1 << " ";
        }
        exit(0);
    }

    for (int i: elements)
    {
        if (abs(i - curr) != 1)
        {
            res.push_back(i);
            elements.erase(i);
            evil_recursion(depth + 1, i);
            res.pop_back();
            elements.insert(i);
        }
    }
}

int32_t main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.out","w",stdout);

    cin >> n;
    // n = 4;
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        elements.insert(i);
    }
    evil_recursion(0, n + 2);
    

    return 0;
}