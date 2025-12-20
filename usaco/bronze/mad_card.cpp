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

int evil_recursion(int curr_res, int depth, set<char> &rem_ops, vector<int> &nums)
{
    if (depth == 4)
    {
        if (curr_res > 24){
            return -1;
        }
        return curr_res;
    }
    else
    {
        int res = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == -1)
                continue;

            for (char ch : rem_ops)
            {
                int t=-1;
                if (ch == '+')
                {
                    int temp = nums[i];
                    nums[i] = -1;
                    t = evil_recursion(curr_res + temp, depth + 1, rem_ops, nums);
                    nums[i] = temp;
                }
                else if (ch == '-')
                {
                    int temp = nums[i];
                    nums[i] = -1;
                    t = evil_recursion(curr_res - temp, depth + 1, rem_ops, nums);
                    nums[i] = temp;
                }
                else if (ch == '*')
                {
                    int temp = nums[i];
                    nums[i] = -1;
                    t = evil_recursion(curr_res * temp, depth + 1, rem_ops, nums);
                    nums[i] = temp;
                }
                else if (ch == '/')
                {
                    int temp = nums[i];
                    if (temp == 0 || curr_res % temp != 0){
                        continue;
                    }
                    nums[i] = -1;
                    t = evil_recursion(curr_res / temp, depth + 1, rem_ops, nums);
                    nums[i] = temp;
                }
                res = max(res, t);
            }
        }
        return res;
    }
}
int32_t main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.out","w",stdout);
    fastio;
    int tt;
    cin >> tt;
    while (tt--)
    {
        vector<int> data(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> data[i];
        }
        set<char> rem_ops = {'+', '-', '*', '/'};
        int g_max = -1;
        for (int i = 0; i < 4; i++){
            int temp = data[i];
            data[i] = -1;
            g_max = max(evil_recursion(temp, 1, rem_ops, data), g_max);
            data[i] = temp;
        }
            cout << g_max << endl;
    }
    return 0;
}