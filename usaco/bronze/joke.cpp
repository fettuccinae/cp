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
int32_t main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.out","w",stdout);
    fastio;
    int t, f;
    cin >> t >> f;
    map<string, int> res;
    set<string> result;
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 2; i++)
    {
        char a = s[i], b = s[i + 1], c = s[i + 2];
        if (a != b && b == c)
        {
            string temp = string() + b + c;
            res[s.substr(i, 3)]++;
        }
    }
    for (int i = 0; i < s.size() - 2; i++)
    {
        string temp = s;
        char a = s[i], b = s[i + 1], c = s[i + 2];
        if (a != b && b != c && a != c)
        {
            continue;
        }
        else if (a == b && a!=c && b != c)
        {
            temp[i + 1] = c;
            if (res[temp.substr(i, 3)] + 1 >= f)
            {
                res[temp.substr(i, 3)]++;
            }
            else
            {
                continue;
            }
            if (i >= 1 && res[temp.substr(i - 1, 3)] >= f)
            {
                res[temp.substr(i - 1, 3)]--;
            }
            if (i + 1 < s.size() - 2 && res[temp.substr(i + 1, 3)] >= f)
            {
                res[temp.substr(i + 1, 3)]--;
            }
        }
        else if (a == c && a != b && b != c)
        {
            temp[i + 2] = b;
            if (res[temp.substr(i, 3)] + 1 >= f)
            {
                res[temp.substr(i, 3)]++;
            }
            else
            {
                continue;
            }
            if (i + 1 < s.size() - 2 && res[temp.substr(i + 1, 3)] >= f)
            {
                res[temp.substr(i - 1, 3)]--;
            }
            if (i + 2 < s.size() - 2 && res[temp.substr(i + 2, 3)] >= f)
            {
                res[temp.substr(i + 2, 3)]--;
            }
        }
        else if (a == b && b == c)
        {
            for (int j = 0; j < 26; j++)
            {
                temp[i] = 'a' + j;
                if (temp[i] != b)
                {
                    if (res[temp.substr(i, 3)] + 1 >= f)
                    {
                        res[temp.substr(i, 3)]++;

                        if (i > 2 && res[temp.substr(i - 2, 3)] >= f)
                        {
                            res[temp.substr(i - 2, 3)]--;
                        }
                        if (i > 1 && res[temp.substr(i - 1, 3)] >= f)
                        {
                            res[temp.substr(i - 1, 3)]--;
                        }
                    }
                }
            }
        }
    }
    // vector<string> data;
    cout << res.size() << endl;
    for (auto &pair : res)
    {
        cout << pair.first << endl;
    }

    return 0;
}