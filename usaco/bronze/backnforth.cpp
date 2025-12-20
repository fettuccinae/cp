#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#include <cstdio>

/*
 */
set<int> res;

void evil_recursion(int sum, int day, vector<int> &a, vector<int> &b)
{
    if (day >= 4)
    {
        res.insert(sum);
        return;
    }
    if (day % 2 == 0)
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != -1)
            {
                int temp = a[i];
                sum += temp;
                b.push_back(temp);
                a[i] = -1;
                evil_recursion(sum, day + 1, a, b);
                a[i] = temp;
                sum -= temp;
                b.pop_back();
            }
        }
    }
    else
    {
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] != -1)
            {
                int temp = b[i];
                sum -= temp;
                a.push_back(temp);
                b[i] = -1;
                evil_recursion(sum, day + 1, a, b);
                b[i] = temp;
                sum += temp;
                a.pop_back();
            }
        }
    }
}

int32_t main()
{
    freopen("backforth.in","r",stdin);
    freopen("backforth.out","w",stdout);
    fastio;
    vector<int> bucks_a(10), bucks_b(10);
    for (int i = 0; i < 10; i++)
    {
        int c;
        cin >> c;
        bucks_a[i] = c;
    }
    for (int i = 0; i < 10; i++)
    {
        int c;
        cin >> c;
        bucks_b[i] = c;
    }
    set<int> vis;
    evil_recursion(0, 0, bucks_a, bucks_b);
    cout << res.size() << endl;

    return 0;
}