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
    int n, f;
    cin >> n >> f;
    string s;
    cin >> s;
    map<string, int> res;
    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] != s[i + 1] && s[i + 1] == s[i + 2])
        {
            res[s.substr(i, 3)]++;
        }
    }
    for (int i = 2; i < n; i++){
        string temp = s;
        for (int j = 0; j < 26; j++)
        {
            temp[i] = 'a' + j;
            if (i < n - 3 && temp[i] != temp[i + 1])
        }
    }

        return 0;
}