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
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);
    fastio;
    string s, t;
    vector<char> res;
    cin >> s >> t;
    int pattern_size = t.size();
    int string_size = s.size();
    for (int i = 0; i < s.size(); i++)
    {
        res.push_back(s[i]);
        if (res.size() >= pattern_size)
        {
            bool bruh = true;
            for (int p = pattern_size - 1; p >= 0; p--)
            {
                if (t[p] != res[(res.size() - pattern_size) + p]){
                    bruh = false;
                    break;
                }
            }
            if (bruh == true){
                for (int k = 0; k < pattern_size; k++){
                    res.pop_back();
                }
            }
        }
    }
    for (char c: res){
        cout << c;
    }
    cout << endl;

    return 0;
}